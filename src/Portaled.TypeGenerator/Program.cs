using CppSharp;
using CppSharp.AST;
using CppSharp.AST.Extensions;
using CppSharp.Generators;
using CppSharp.Passes;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;

namespace Portaled.TypeGenerator
{
    public static class Program
    {
        const string modulename = "Portaled.Interop";
        public static void Main(string[] args)
        {
            ConsoleDriver.Run(new Lib());

            Move($"{modulename}.cs");
            Move($"{modulename}-symbols.cpp");
        }

        static string srcFolder = @"C:\dev\AC\ACClient\Portaled\CppSharp";
        static string destFolder = @"C:\dev\AC\ACClient\Portaled\src\Portaled.Interop";

        static void Move(string filename)
        {
            var dest = $"{destFolder}\\{filename}";
            if (File.Exists(dest))
                File.Delete(dest);
            File.Move($"{srcFolder}\\{filename}", dest);
        }

        public class Lib : ILibrary
        {
            public void Postprocess(Driver driver, ASTContext ctx) 
            {
            }
            public void Preprocess(Driver driver, ASTContext ctx) 
            { 
            }
            public void Setup(Driver driver)
            {
                var options = driver.Options;
                options.GeneratorKind = GeneratorKind.CSharp;
                var module = options.AddModule("Portaled.Interop");
                
                module.IncludeDirs.Add(@"C:\dev\AC\ACClient\Portaled\src\Portaled.TypeGenerator\include");
                module.Headers.Add("acclient.h");
                
            }
            public void SetupPasses(Driver driver) 
            {
              //  driver.Context.TranslationUnitPasses.AddPass(new MyPass());
                driver.Context.TranslationUnitPasses.AddPass(new MyRegexRenamePass("\\$", "", RenameTargets.Any));
               // driver.Context.TranslationUnitPasses.AddPass(new MyFieldToPropertyPass());
                //driver.Context.TranslationUnitPasses.AddPass(new MyRegexRenamePass("\\$", "", RenameTargets.Any));
                driver.Context.TranslationUnitPasses.AddPass(new MyRegexRenamePass("^([0-9])(.*)", "E$1$2", RenameTargets.Any));
                
                //driver.Context.TranslationUnitPasses.AddPass(new MyRegexRenamePass("33534C82092764B28C02037197983D22", "FOO1", RenameTargets.Any));
                //driver.Context.TranslationUnitPasses.AddPass(new MyRegexRenamePass("^([0-9])", "E$1", RenameTargets.Any));
                //driver.Context.TranslationUnitPasses.RenameWithPattern("tagRGBQUAD", "tagRGBQUADFOOBAR", RenameTargets.Any); //WORKS
                //var comments = new CleanCommentsPass();


                //  throw new Exception()
                //var passes = driver.Context.GeneratorOutputPasses.Passes;
                // driver.Context.TranslationUnitPasses.RenameDeclsUpperCase(RenameTargets.Any);
                // driver.Context.TranslationUnitPasses.AddPass(new FunctionToInstanceMethodPass());
                // driver.Context.TranslationUnitPasses.AddPass(new StripUnusedSystemTypesPass());
            }
        }
    }

    public class MyPass : TranslationUnitPass
    {
        public override bool VisitFunctionType(FunctionType function, TypeQualifiers quals)
        {

            return base.VisitFunctionType(function, quals);
        }

        public override bool VisitFunctionDecl(Function function)
        {
            return base.VisitFunctionDecl(function);
        }

        public override bool VisitProperty(Property property)
        {
            if (property.Name == "PIOProc")
            {

            }
            return base.VisitProperty(property);
        }
    }

    /// <summary>
    /// Renames a declaration based on a regular expression pattern.
    /// </summary>
    public class MyRegexRenamePass : RenamePass
    {
        public string Pattern;
        public string Replacement;

        public MyRegexRenamePass(string pattern, string replacement)
        {
            Pattern = pattern;
            Replacement = replacement;
        }

        public MyRegexRenamePass(string pattern, string replacement,
                                    RenameTargets targets)
            : this(pattern, replacement)
        {
            Targets = targets;
        }

        public override bool Rename(Declaration decl, out string newName)
        {
            if (base.Rename(decl, out newName))
                return true;

            var replace = System.Text.RegularExpressions.Regex.Replace(decl.Name, Pattern, Replacement);

            if (!decl.Name.Equals(replace))
            {
                newName = replace;
                return true;
            }

            newName = null;
            return false;
        }
    }


    public class MyFieldToPropertyPass : TranslationUnitPass
    {
        public MyFieldToPropertyPass()
        {
            VisitOptions.VisitClassBases = false;
            VisitOptions.VisitClassProperties = false;
            VisitOptions.VisitEventParameters = false;
            VisitOptions.VisitFunctionParameters = false;
            VisitOptions.VisitFunctionReturnType = false;
            VisitOptions.VisitNamespaceEnums = false;
            VisitOptions.VisitNamespaceEvents = false;
            VisitOptions.VisitNamespaceTemplates = false;
            VisitOptions.VisitNamespaceTypedefs = false;
            VisitOptions.VisitNamespaceVariables = false;
            VisitOptions.VisitTemplateArguments = false;
        }

        public override bool VisitClassDecl(Class @class)
        {
            if (@class.CompleteDeclaration != null)
                return VisitClassDecl(@class.CompleteDeclaration as Class);

            return base.VisitClassDecl(@class);
        }

        public override bool VisitFieldDecl(Field field)
        {
            if (!VisitDeclaration(field))
                return false;

            if (ASTUtils.CheckIgnoreField(field))
                return false;

            if (Options.GeneratorKind == GeneratorKind.CPlusPlus)
            {
                if (field.Access != AccessSpecifier.Public)
                    return false;
            }

            var @class = field.Namespace as Class;
            if (@class == null)
                return false;

            // Check if we already have a synthetized property.
            var existingProp = @class.Properties.FirstOrDefault(property => property.Field == field);
            if (existingProp != null)
                return false;

            field.GenerationKind = GenerationKind.Internal;

            var prop = new Property
            {
                Name = field.Name,
                Namespace = field.Namespace,
                QualifiedType = field.QualifiedType,
                Access = field.Access,
                Field = field,
                AssociatedDeclaration = field
            };

           // if (field.QualifiedType.Type.IsPointer())
           //     field.QualifiedType = field.QualifiedType.Type.GetQualifiedPointee();

            if (Options.GeneratorKind == GeneratorKind.CPlusPlus)
                GenerateAcessorMethods(field, prop);


            if (field.Name == "rghCertStore")
            {

            }

            // do not rename value-class fields because they would be
            // generated as fields later on even though they are wrapped by properties;
            // that is, in turn, because it's cleaner to write
            // the struct marshalling logic just for properties
            if (!prop.IsInRefTypeAndBackedByValueClassField())
                field.Name = Generator.GeneratedIdentifier(field.Name);


            if (field.Name == "rghCertStore")
            {


            }
            @class.Properties.Add(prop);

            //System.Diagnostics.Debug($"Property created from field: {field.QualifiedName}");

            return false;
        }

        private void GenerateAcessorMethods(Field field, Property property)
        {
            var @class = field.Namespace as Class;

            var getter = new Method
            {
                Name = $"get_{field.Name}",
                Namespace = @class,
                ReturnType = field.QualifiedType,
                Access = field.Access,
                AssociatedDeclaration = property,
                IsStatic = field.IsStatic,
                SynthKind = FunctionSynthKind.FieldAcessor
            };


            property.GetMethod = getter;
            @class.Methods.Add(getter);

            var isSetterInvalid = field.QualifiedType.IsConstRef();
            if (!isSetterInvalid)
            {
                var setter = new Method
                {
                    Name = $"set_{field.Name}",
                    Namespace = @class,
                    ReturnType = new QualifiedType(new BuiltinType(PrimitiveType.Void)),
                    Access = field.Access,
                    AssociatedDeclaration = property,
                    IsStatic = field.IsStatic,
                    SynthKind = FunctionSynthKind.FieldAcessor
                };

                var param = new Parameter
                {
                    Name = "value",
                    QualifiedType = field.QualifiedType,
                    Namespace = setter
                };

                setter.Parameters.Add(param);

                property.SetMethod = setter;
                @class.Methods.Add(setter);
            }
        }
    }
}



#ifndef LIST_H
#define LIST_H

#include "core.h"
#include "primitive.h"
#include "enums.h"


template <typename T>
struct ListNode
{
	T data;
	ListNode<T>* next;
	ListNode<T>* prev;
};


template <typename T>
struct List
{
	void* vfptr;
	ListNode<T>* _head;
	ListNode<T>* _tail;
	unsigned int _num_elements;
};

template <typename T>
struct PackableLLNode
{
	T data;
	PackableLLNode<T>* next;
	PackableLLNode<T>* prev;
};

template <typename T>
struct PackableList
{
	PackObj parent;
	PackableLLNode<T>* head;
	PackableLLNode<T>* tail;
	unsigned int curNum;
};


template <typename T>
struct SmartArray
{
	T* m_data;
	unsigned int m_sizeAndDeallocate;
	unsigned int m_num;
};


template <typename T>
struct AC1Legacy_SmartArray
{
	T* m_data;
	unsigned int m_size;
	unsigned int m_num;
};


#endif
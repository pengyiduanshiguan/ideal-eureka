#include "Stack.h"
#include <stdio.h>
#include <assert.h>
#include <malloc.h>

void StackInit(Stack* ps)
{
	assert(ps);
	ps->_array = (STDataType*)malloc(sizeof(STDataType)*4);
	if (ps->_array = NULL)
	{
		assert(0);
		return;
	}
	ps->_size = 0;
	ps->_capacity = 4;
}

void StackDestory(Stack* ps)
{
	assert(ps);
	if (ps->_array)
	{
		free(ps->_array);
		ps->_size = 0;
		ps->_capacity = 0;
	}
	return;
}

void CheckCapacity(Stack*ps)
{
	assert(ps);
	if (ps->_size == ps->_capacity)
	{
		int NewCapacity =ps->_capacity * 2;
		STDataType* pTemp = (STDataType*)malloc(sizeof(STDataType) * NewCapacity);
		if (pTemp == NULL)
		{
			assert(0);
			return;
		}
		for (int i = 0; i < ps->_size; ++i)
		{
			pTemp[i] = ps->_array[i];
		}
		free(ps->_array);
		ps->_array = pTemp;
		ps->_capacity = NewCapacity;
	}
	return;
}

void StackPush(Stack* ps, STDataType data)
{
	assert(ps);
	//Õ»ÊÇ·ñÒÑÂú
	CheckCapacity(ps);
	ps->_array[ps->_size + 1] = data;
	ps->_size = ++ps->_size;
	
}

void StackPop(Stack* ps)
{
	assert(ps);
	if (ps->_size == 0)
	{
		return;
	}
	ps->_size--;
}

STDataType StackTop(Stack* ps)
{
	assert(ps);
	return ps->_array[ps->_size -1];
}

int StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->_size = 0;
}

int StackSize(Stack* ps)
{
	assert(0);
	return ps->_size;
}

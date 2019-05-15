#include "SeqList.h"
#include <malloc.h>
#include <stdio.h>
#include <assert.h>

void SeqInit(PSeq ps, int capacity)
{
	ps->_array = (DataType*)malloc(sizeof(DataType) * capacity);
	if (ps->_array == NULL) 
	{
		assert(0);
		return;
	}
	ps->_capacity = capacity;
	ps->_size = 0;
}

void SeqPushBack(PSeq ps, DataType data)
{
	assert(ps);
	//有可能顺序表已满CheckCapacity(ps)
	CheckCapacity(ps);
	ps->_array[ps->_size] = data;
	++ps->_size;
	 
}

int SeqEmpty(PSeq ps)
{
	assert(ps);
	return  0 == ps->_size;
}

void SeqPopBack(PSeq ps)
{
	assert(ps); 
	if (SeqEmpty(ps))
		return;
	--ps->_size;
}

void SeqPushFront(PSeq ps, DataType data)
{
	assert(ps);
	CheckCapacity(ps);
	//将顺序表中所有的元素向后移
	for (int i = ps->_size; i > 0; --i)
	{
		ps->_array[i] = ps->_array[i-1];
	}
	//插入元素
	ps->_array[0] = data;
	++ps->_size;
}

void SeqPopFront(PSeq ps)
{
	assert(ps);
	if (SeqEmpty(ps))
		return;
	for (int i = 1; i < ps->_size; ++i)
	{
		ps->_array[i - 1] = ps->_array[i];
	}
	--ps->_size;
}

void SeqInsert(PSeq ps,int pos, DataType data)
{
	assert(ps);
	CheckCapacity(ps);
	if (pos<0 || pos>ps->_size)
		return;
	for (int i = ps->_size - 1; i >= pos; --i)
		ps->_array[i + 1] = ps->_array[i];
	ps->_array[pos] = data;
	++ps->_size;
}

void SeqErase(PSeq ps,int pos)
{
	assert(ps);
	if (pos<0||pos>ps->_size)
		return;
	for (int i = pos; i < ps->_size; ++i)
	{
		ps->_array[i - 1] = ps->_array[i];
	}
	--ps->_size;
}

int SeqFind(PSeq ps, DataType data)
{
	assert(ps);
	for (int i = 0; i < ps->_size - 1; ++i)
	{
		if (ps->_array[i] == data)
			return i;
	}
	return -1;
}
int SeqSize(PSeq ps)
{
	assert(ps);
	return ps->_size;
}
int SeqCapacity(PSeq ps)
{
	assert(ps);
	return ps->_capacity;
}

void SeqClear(PSeq ps)
{
	assert(ps);
	return ps->_size == 0;
}

void SeqRemove(PSeq ps, DataType data)
{
	SeqErase(ps, SeqFind(ps, data));
} 
	

void SeqDestory(PSeq ps)
{
	if (ps->_array)
	{
		free(ps->_array);
		ps->_array = NULL;
		ps->_capacity = 0;
		ps->_size = 0;
	}
}

void CheckCapacity(PSeq ps)
{
	assert(ps);
	if (ps->_size == ps->_capacity)
	{
		//顺序表中已经没有空间
		int newCapacity = ps->_capacity * 2;
		//申请新空间
		int* pTmp = (DataType*)malloc(sizeof(DataType) * newCapacity);
		if (pTmp == NULL)
		{
			assert(0);
			return;
		}
		//拷贝元素
		for (int i = 0; i < ps->_size-1; ++i)
		{
			pTmp[i] = ps->_array[i];
		}
		//释放旧空间
		free(ps->_array);
		//更新元素
		ps->_array = pTmp;
		ps->_capacity = newCapacity;
	}

}

void TestSeq()
{
	Seq s;
	SeqInit(&s, 9);

	 SeqPushBack(&s,1);
	 SeqPushBack(&s,2);
	 SeqPushBack(&s,3);
	 SeqPushBack(&s,4);
}
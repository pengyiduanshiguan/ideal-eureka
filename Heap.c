#include "Heap.h"
#include <stdio.h>
#include <assert.h>
#include <malloc.h>

int Less(HPDataType left, HPDataType right)
{
	return left < right;
}

int Great(HPDataType left, HPDataType right)
{
	return right < left;
}

void InitHeap(Heap* hp, HPDataType* array, int size,PCOM compare)
{
	assert(hp);
	hp->_array = (HPDataType*)malloc(sizeof(HPDataType) * hp->_capacity);
	if (hp->_array == NULL)
	{
		assert(0);
		return;
	}
	hp->_capacity = size;
	for (int i = 0; i < size; ++i)
	{
		hp->_array[i] = array[i];
	}
	hp->_size = size;
	hp->Compare = compare;
	//找完全二叉树中第一个非叶子结点
	int root = ((size - 2) >> 1);
	for (root; root >= 0; --root)
		AdjustDown(array, size, root,hp->Compare);
}

void AdjustDown(int* array, int size, int parent,PCOM Compare)
{
	int child = parent * 2 + 1;

	while (child<size)
	{
		
			//双亲与孩子进行比较
		if (child+1<size && Compare(array[child+1],array[child]))
			child += 1;
		if (Compare(array[parent] , array[child]))
		{
			Swap(&array[parent],&array[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			return;
	}
}

void Swap(HPDataType** a, HPDataType** b)
{
	int* tmp=*a;
	*a = *b;
	*b = tmp;
}

void AdjustUp(int* array, int size, int child,PCOM Compare)
{
	int parent = ((child - 1) >> 1);

	while (child)
	{   
		if (Compare(array[child] , array[parent]))
		{
			Swap(&array[child], &array[parent]);
			child = parent;
			parent = ((child - 1) >> 1);
		}
		else 
			return;
	}
}

void CheckCapacity(Heap* hp)
{
	assert(hp);
	if (hp->_size == hp->_capacity)
	{
		int newCapacity = hp->_capacity * 2;
		HPDataType* pTemp = (HPDataType*)malloc(sizeof(HPDataType) * newCapacity);
		if (pTemp == NULL)
		{
			assert(0);
			return;
		}
		for (int i = 0; i < hp->_size; ++i)
			pTemp[i] = hp->_array[i];
		free(hp->_array);
		hp->_array = pTemp;
		hp->_capacity = newCapacity;	
	}
}

void InsertHeap(Heap* hp, HPDataType data)
{
	CheckCapacity(&hp);
	hp->_array[hp->_size] = data;
	hp->_size += 1;
	AdjustUp(hp->_array, hp->_size, hp->_size - 1,hp->Compare);
}

void EraseHeap(Heap* hp)
{
	if (HeapEmpty(hp))
		return;
	Swap(&hp->_array[0], &hp->_array[hp->_size - 1]);
	hp->_size -= 1;
	AdjustDown(hp->_array, hp->_size, 0,hp->Compare);
}

int HeapSize(Heap* hp)
{
	assert(hp);
	return hp->_size;
}

int HeapEmpty(Heap* hp)
{
	assert(hp);
	return hp->_size == 0;
}

HPDataType HeapTop(Heap* hp)
{
	assert(hp);
	return hp->_array[0];
}

void Destory(Heap* hp)
{
	assert(hp);
	if (hp->_array)
	{
		free(hp->_array);
		hp->_capacity = 0;
		hp->_size = 0;
	}
}

void TestHeap()
{
	Heap p;
	int a[] = {27,15,19,18,34,65,49,25,37};
	InitHeap(&p, a, sizeof(a)/sizeof(a[0]),Less);
	Destory(&p);
}
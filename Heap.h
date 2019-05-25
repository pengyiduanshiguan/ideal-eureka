#pragma once

typedef int HPDataType;

typedef int (*PCOM)(HPDataType, HPDataType);
int Less(HPDataType left, HPDataType right);
int Great(HPDataType left, HPDataType right);
typedef struct Heap
{
	HPDataType* _array;
	int _capacity;
	int _size;
	PCOM Compare;
}Heap;
void InitHeap(Heap* hp, HPDataType* array, int size,PCOM Compare);
void AdjustUp(int* array, int size, int child,PCOM Compare);
void AdjustDown(int* array, int size, int parent,PCOM Cpmpare);
void InsertHeap(Heap* hp, HPDataType data);
void EraseHeap(Heap* hp);
int HeapSize(Heap* hp);
int HeapEmpty(Heap* hp);
HPDataType HeapTop(Heap* hp);

void Destory(Heap* hp);
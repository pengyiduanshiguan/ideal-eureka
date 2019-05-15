#pragma once

//顺序表结构:
//静态顺序表
#if 0
typedef int DataType;
#define MAX_SIZE 100

struct SeqList
{
	DataType _array[MAX_SIZE];  //用来存储顺序表中的元素
	int size;     //顺序表中有效元素的个数
};
#endif

//动态顺序表
typedef int DataType;
typedef struct SeqList
{
	DataType* _array;  
	int _capacity;     //顺序表总大小
	int _size;      //顺序表中有效元素的个数
}Seq,*PSeq;

void SeqInit(PSeq ps, int capacity);
void SeqPushBack(PSeq ps,DataType data);

int SeqEmpty(PSeq ps);
void SeqPopBack(PSeq ps);
void SeqPushFront(PSeq ps,DataType data);
void SeqPopFront(PSeq ps);
void SeqInsert(PSeq ps,int pos,DataType data);
void SeqErase(PSeq ps,int pos);
int SeqFind(PSeq ps, DataType data);
int SeqSize(PSeq ps);
int SeqCapacity(PSeq ps);
void SeqClear(PSeq ps);
void SeqRemove(PSeq ps, DataType data);
void SeqDestory(PSeq ps);
void CheckCapacity(PSeq ps);
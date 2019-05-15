#pragma once

//˳���ṹ:
//��̬˳���
#if 0
typedef int DataType;
#define MAX_SIZE 100

struct SeqList
{
	DataType _array[MAX_SIZE];  //�����洢˳����е�Ԫ��
	int size;     //˳�������ЧԪ�صĸ���
};
#endif

//��̬˳���
typedef int DataType;
typedef struct SeqList
{
	DataType* _array;  
	int _capacity;     //˳����ܴ�С
	int _size;      //˳�������ЧԪ�صĸ���
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
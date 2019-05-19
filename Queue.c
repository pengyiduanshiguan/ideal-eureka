#include "Queue.h"
#include <stdio.h>
#include <assert.h>
#include <malloc.h>

void QueueInit(Queue* q)
{
	assert(q);
	q->_front = q->_back=NULL;

}

QNode* BuyQNode(QDataType data)
{
	QNode* pNewNode =(QNode*)mallo(sizeof(QNode));
	if (NULL == pNewNode)
	{
		assert(0);
		return;
	}
	pNewNode->_data = data;
	pNewNode->_pNext = NULL;
	return pNewNode;
}

void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	QNode* pNewNode = BuyQNode(data);
	if (QueueEmpty(q))
		q->_front = q->_back = pNewNode;
	else
	{
		q->_back->_pNext = pNewNode;
		q->_back = pNewNode;
	}
}

void QueuePop(Queue* q)
{
	assert(q);
	if (QueueEmpty(q))
		return;
	QNode* pDelNode = q->_front;
	if (pDelNode->_pNext=NULL)
	{
		q->_front = q->_back = NULL;
	}
	else
	{
		q->_front = pDelNode->_pNext;	
	}
	free(pDelNode);
}

QDataType QueueFront(Queue* q)
{
	assert(q);
	return q->_front->_data;
}

QDataType QueueBack(Queue* q)
{
	assert(q);
	return q->_back->_data;
}

int QueueSize(Queue* q)
{
	assert(q);
	int count = 0;
	QNode* pCur = q->_front;
	while (pCur)
	{
		count++;
		pCur = pCur->_pNext;
	}
	return count;
}

int QueueEmpty(Queue* q)
{
	assert(q);
	return q->_front == NULL;
}

void QueueDestory(Queue* q)
{
	assert(q);
	QNode* pCur = q->_front;
	while (pCur)
	{
		q->_front = pCur->_pNext;
		free(pCur);
		pCur = q->_front;
	}
	q->_front = q->_back = NULL; 
}
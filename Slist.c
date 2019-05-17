#include "SList.h"
#include <stdio.h>
#include <assert.h>

void SListInit(SList* s)
{
	assert(s);
	s->_pHead = NULL;
}

PNode BuySListNode(SDataType data)
{
	PNode pNewNode = (PNode)malloc(sizeof(PNode));
	if (pNewNode == NULL)
	{
		assert(0);
		return NULL;
	}
	pNewNode->_data = data;
	pNewNode->_pNext = NULL;
	return pNewNode;
}

void SListPushBack(SList* s, SDataType data)
{
	assert(s);
	PNode pNewNode = BuySListNode(data);
	if (NULL == s->_pHead)
	{
		//若为空链表,则新增节点为头节点
		s->_pHead = pNewNode;
	}
	else
	{
		//链表非空,找最后一个节点
		PNode pCur = s->_pHead;
		while (pCur->_pNext)
			pCur = pCur->_pNext;
		pCur->_pNext = pNewNode;
	}
}

void SListPopBack(SList* s)
{
	assert(s);
	if (s->_pHead == NULL)
		//空链表
		return;
	else if(NULL ==s->_pHead->_pNext)
	{
		//一个节点
		free(s->_pHead);
		s->_pHead;
	}
	else
	{
		//多个节点
		PNode pPre = NULL;
		PNode pCur = s->_pHead;
		while (pCur->_pNext)
		{
			pPre = pCur;
			pCur = pCur->_pNext;
		}
		free(pCur);
		pPre->_pNext = NULL;
	}
}

void SListPushFront(SList* s, SDataType data)
{
	assert(s);
	PNode pNewNode = BuySListNode(data);
	pNewNode->_pNext = s->_pHead;
	s->_pHead = pNewNode;
}

void SListPopFront(SList* s)
{
	assert(s);
	if (s->_pHead == NULL);
		//空链表
		
	else if (s->_pHead->_pNext == NULL)
	{
		free(s->_pHead);
	}
	else
	{
		s->_pHead = s->_pHead->_pNext;
		free(s->_pHead);
	}
	return;
}

void SListInsert(SList* s,PNode pos, SDataType data)
{
	assert(s);
	if (pos == NULL)
		return;
	PNode pNewNode = BuySListNode(data);
	pNewNode->_pNext = pos->_pNext;
	pos->_pNext = pNewNode;
}

void SListErase(SList* s, PNode pos)
{
	assert(s);
	if (s->_pHead == NULL||pos == NULL)
		return;
	else if(s->_pHead==pos)
	{
		s->_pHead = s->_pHead->_pNext;
	}
	else
	{
		PNode pPrePos = s->_pHead;
		while (pPrePos->_pNext != pos)
			pPrePos = pPrePos->_pNext;
		pPrePos->_pNext = pos->_pNext;
	}
	free(pos);
}

int SListSize(SList* s)
{
	assert(s);
	if (s->_pHead == NULL)
		return 0;
	else
	{
		int count = 1;
		PNode pCur = s->_pHead;
		while (pCur->_pNext)
		{
			pCur = pCur->_pNext;
			++count;
			return count;
		}
	}
}

int SListEmpty(SList* s)
{
	assert(s);
	return NULL == s->_pHead;
}

void SListRemove(SList* s, SDataType data)
{
	assert(s);
	if (s->_pHead == NULL)
		return;
	PNode pPre = NULL;
	PNode pCur = s->_pHead;
	while (pCur)
	{
		if (pCur->_data == data)
		{
			if (pCur == s->_pHead)
			{
				s->_pHead = pCur->_pNext;
			}
			else
			{
				pPre->_pNext = pCur->_pNext;
			}
			free(pCur);
			break;
		}
		else
		{
			pPre = pCur;
			pCur = pCur->_pNext;
		}
	}
	return;
}
   
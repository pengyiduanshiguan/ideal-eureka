#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "DList.h"

void DListInit(PDLNode* pHead) 
{
	assert(pHead);
	*pHead = (PDLNode)malloc(sizeof(DLNode));
	if (NULL == *pHead) 
	{
		assert(0);
		return ;
	}
	(*pHead)->_pNext = *pHead;
	(*pHead)->_pPre = *pHead;
}

PDLNode BuyDistNode(DLDataType data)
{
	PDLNode pNewNode = (PDLNode)malloc(sizeof(DLNode));
	if (NULL == pNewNode)
	{
		assert(0);
		return;
	}
	pNewNode->_data = data;
	pNewNode->_pNext = NULL;
	pNewNode->_pPre = NULL;
	return pNewNode;
}

void DListPushBack(PDLNode pHead, DLDataType data)
{
	PDLNode pNewNode = BuyDistNode(data);
	pNewNode->_pNext = pHead;
	pNewNode->_pPre = pHead->_pPre;
	pHead->_pPre->_pNext = pNewNode;
	pHead->_pPre = pNewNode;
}

void DListPopBack(PDLNode pHead)
{
	assert(pHead);
	if (pHead == pHead->_pNext)
		return;
	PDLNode pDelNode = pHead->_pPre;
	pDelNode->_pPre->_pNext = pHead;
	pHead->_pPre = pDelNode->_pPre;
	free(pDelNode);
}

void DListPushFront(PDLNode pHead, DLDataType data)
{
	PDLNode pNewNode = BuyDListNode(data);
	pNewNode->_pNext = pHead->_pNext;
	pNewNode->_pPre = pHead;
	pHead->_pNext = pNewNode;
	pNewNode->_pNext->_pPre = pNewNode;
}

void DListPopFront(PDLNode pHead)
{
	assert(pHead);
	if (pHead->_pNext == pHead)
		return;
	PDLNode pDelNode = pHead->_pNext;
	pHead->_pNext = pDelNode->_pNext;
	pDelNode->_pNext->_pPre = pHead;
	free(pDelNode);
}

void DLishInsert(PDLNode pos, DLDataType data)
{
	if (pos==NULL)
		return;
	PDLNode pNewNode = BuyDListNode(data);
	pNewNode->_pNext = pos;
	pNewNode->_pPre = pos->_pPre;
	pos->_pPre = pNewNode;
	pNewNode->_pPre->_pNext = pNewNode;
}

void DLishErase(PDLNode pos)
{
	if (pos == NULL)
		return;
	pos->_pNext->_pPre = pos->_pPre;
	pos->_pPre->_pNext = pos->_pNext;
	
	free(pos);
}

void DLishClear(PDLNode pHead)
{
	PDLNode pCur = pHead->_pNext;
	while (pCur != pHead)
	{
		pHead->_pNext = pCur->_pNext;
		free(pCur);
		pCur = pHead->_pNext;
	}
	pHead->_pNext;
	pHead->_pPre = pHead;
}

void DLishDestroy(PDLNode* pHead)
{
	DListClear(*pHead);
	free(*pHead);
	*pHead = NULL;
}

void TestDLish()
{
	PDLNode pHead = NULL;
	DListInit(&pHead);
}

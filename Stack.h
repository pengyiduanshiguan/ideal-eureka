#pragma once

typedef int STDataType;

#define MAX_SIZE 100

#if 0
typedef struct Stack
{
	STDataType _a[MAX_SIZE];
	int _top;
}Stack;

#endif
//支持动态增长
typedef struct Stact
{
	STDataType _array;
	int _size;    //栈顶位置,代表栈中有效元素
	int  _capacity;     //容量
}Stack;

void StackInit(Stack* ps);
void StackDestory(Stack* ps);
void StackPush(Stack* ps, STDataType data);
void StackPop(Stack* ps);
STDataType StackTop(Stack* ps);
int StackEmpty(Stack* ps);
int StackSize(Stack* ps);

void TestStack(Stack* ps);
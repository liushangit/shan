#include"queue.h"
#include<stdio.h>
#include<windows.h>

void QueueInit(Queue* q)
{
	q->_pHead = (Node*)malloc(sizeof(Node));//申请新节点
	if (q->_pHead != NULL)
	{
		q->_pTail = q->_pHead;
		q->_pTail->_pNext = NULL;
	}
	else
	    return;
}
void QueuePush(Queue* q, DataType data)
{
	PNode Newnode;
	Newnode=(Node*)malloc(sizeof(Node));
	if (Newnode != NULL)
	{
		Newnode->_data = data;
		q->_pTail->_pNext = Newnode;
		Newnode->_pNext = NULL;
		q->_pTail = Newnode;
	}
	else
		return;//溢出
}
void QueuePop(Queue* q)
{
	assert(q);
	PNode p;
	if (q->_pHead == q->_pTail)
		return;
	p = q->_pHead;
	q->_pHead = q->_pHead->_pNext;
	free(p);
}
DataType QueueFront(Queue* q)
{
	assert(q);
	printf("%d", q->_pHead->_data);
}
DataType QueueBack(Queue* q)
{
	assert(q);
	printf("%d", q->_pTail->_data);
}
int QueueSize(Queue* q)
{
	assert(q);
	int count = 0;
	PNode p;
	p = q->_pHead;
	while (p)
	{
		++count;
		p = p->_pNext;
	}
	printf("%d", count);
}
int QueueEmpty(Queue* q)
{
	assert(q);
	if (q->_pHead == NULL)
		return 0;
	return 1;
}
int main()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q,1);
	QueuePop(&q);
	QueueFront(&q);
	QueueBack(&q);
	QueueSize(&q);
	QueueEmpty(&q);
	system("pause");
	return 0;
}



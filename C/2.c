#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct LNode
{
	int data;     //姑且认为其数据为整型
	struct LNode * next;
}LNode,*linklist;


void InitList(linklist *L);  //申请头结点，头指针地址改变

void InitList(linklist *L)	//接受头指针的地址值
{
	*L = (linklist)malloc(sizeof(struct LNode));
	if(*L == NULL)
	{
		printf("分配结点失败\n");
		exit(-1);
	}
	(*L)->next = NULL;				//置头结点的next值域为空
}

int main(){
	LNode p = NULL;
	InitList(p);
	return 0;
}

#include "LinkStack.h"
#include <malloc.h>
#include<stdio.h>
LinkStack *initLStack(LinkStack *s)//初始化栈
{
	Status pushLStack(LinkStack *s,ElemType e);
	s=(StackNode*)malloc(sizeof(StackNode));
	s->top=NULL;
	s->count=0;
	printf("链栈初始化成功！\n");
	int n;
	printf("请输入栈的元素个数：");
	scanf("%d",&n);
	int i=0;
	while(i<n){
		int k;
		printf("请输入第%d个入栈元素：",++i);
		scanf("%d",&k);
		pushLStack(s,k);
	} 
	return s;
}
Status isEmptyLStack(LinkStack *s)//判断栈是否为空
{
	if(s->top)
		return ERROR;
	else
		return SUCCESS;
}
Status getTopLStack(LinkStack *s,ElemType *e)//得到栈顶元素
{
	if(!s->top)
		return ERROR;
	else{
		*e=s->top->data;
		return SUCCESS;
	}
}
Status clearLStack(LinkStack *s)//清空栈
{
	LinkStackPtr p;
	while(s->top){
		p=s->top;
		s->top=s->top->next;
		s->count--;
		free(p);
	}
}
Status destroyLStack(LinkStack *s)//销毁栈
{
	clearLStack(s);
	free(s);
	return SUCCESS;
}
Status LStackLength(LinkStack *s)//检测栈长度
{
	printf("栈长度为%d\n",s->count);
}
Status pushLStack(LinkStack *s,ElemType e)//入栈
{
	LinkStackPtr p=(LinkStackPtr)malloc(sizeof(StackNode));
	p->data=e;
	p->next=s->top;
	s->top=p;
	s->count++;
	return SUCCESS;
}
Status popLStack(LinkStack *s)//出栈
{
	ElemType e;
	LinkStackPtr p;
	if(isEmptyLStack(s))
	return ERROR;
	e=s->top->data;
	p=s->top;
	s->top=s->top->next;
	s->count--;
	free(p);
	return SUCCESS;
}
/*void menu()
{
    printf("----栈操作----\n");
    printf("1.-----初始化栈\n");
    printf("2.-----判断是否为空栈\n");
    printf("3.-----得到栈顶元素\n");
    printf("4.-----清空栈\n");
    printf("5.-----销毁栈\n");
    printf("6.-----检测栈长度\n");
    printf("7.-----入栈\n");
    printf("8.-----出栈\n");
    printf("9.-----退出程序\n");
}
void option()
{
	LinkStack *s;
	ElemType e;
	int choice=-1;
    while(choice!=9)
    {
        menu();
        printf("请输入你的选择：\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                s=initLStack(s);
                break;
            case 2:
            {
                if(isEmptyLStack(s))
				printf("栈链为空\n");
				else
				printf("栈链不为空\n");
                break;
            }
            case 3:
                if(!getTopLStack(s,&e))
                    printf("空栈！\n");
                else 
                    printf("栈顶元素为%d\n",e);
                break;
            case 4:
                clearLStack(s);
                printf("栈已清空！\n");
                break;
            case 5:
                destroyLStack(s);
                printf("栈已销毁！\n");
                break;
            case 6:
                LStackLength(s);
                break;
            case 7:
            	printf("请输入你要加入的栈元素：\n");
				scanf("%d",&e);
                pushLStack(s,e);
                break;
            case 8:
                if(popLStack(s))
                printf("出栈的元素是：%d\n",e);
                break;
            case 9:
                break;
            default :
                printf("请重新选择\n");
        }
    }
}*/


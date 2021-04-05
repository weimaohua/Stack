#include "LinkStack.h"
#include <malloc.h>
#include<stdio.h>
LinkStack *initLStack(LinkStack *s)//��ʼ��ջ
{
	Status pushLStack(LinkStack *s,ElemType e);
	s=(StackNode*)malloc(sizeof(StackNode));
	s->top=NULL;
	s->count=0;
	printf("��ջ��ʼ���ɹ���\n");
	int n;
	printf("������ջ��Ԫ�ظ�����");
	scanf("%d",&n);
	int i=0;
	while(i<n){
		int k;
		printf("�������%d����ջԪ�أ�",++i);
		scanf("%d",&k);
		pushLStack(s,k);
	} 
	return s;
}
Status isEmptyLStack(LinkStack *s)//�ж�ջ�Ƿ�Ϊ��
{
	if(s->top)
		return ERROR;
	else
		return SUCCESS;
}
Status getTopLStack(LinkStack *s,ElemType *e)//�õ�ջ��Ԫ��
{
	if(!s->top)
		return ERROR;
	else{
		*e=s->top->data;
		return SUCCESS;
	}
}
Status clearLStack(LinkStack *s)//���ջ
{
	LinkStackPtr p;
	while(s->top){
		p=s->top;
		s->top=s->top->next;
		s->count--;
		free(p);
	}
}
Status destroyLStack(LinkStack *s)//����ջ
{
	clearLStack(s);
	free(s);
	return SUCCESS;
}
Status LStackLength(LinkStack *s)//���ջ����
{
	printf("ջ����Ϊ%d\n",s->count);
}
Status pushLStack(LinkStack *s,ElemType e)//��ջ
{
	LinkStackPtr p=(LinkStackPtr)malloc(sizeof(StackNode));
	p->data=e;
	p->next=s->top;
	s->top=p;
	s->count++;
	return SUCCESS;
}
Status popLStack(LinkStack *s)//��ջ
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
    printf("----ջ����----\n");
    printf("1.-----��ʼ��ջ\n");
    printf("2.-----�ж��Ƿ�Ϊ��ջ\n");
    printf("3.-----�õ�ջ��Ԫ��\n");
    printf("4.-----���ջ\n");
    printf("5.-----����ջ\n");
    printf("6.-----���ջ����\n");
    printf("7.-----��ջ\n");
    printf("8.-----��ջ\n");
    printf("9.-----�˳�����\n");
}
void option()
{
	LinkStack *s;
	ElemType e;
	int choice=-1;
    while(choice!=9)
    {
        menu();
        printf("���������ѡ��\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                s=initLStack(s);
                break;
            case 2:
            {
                if(isEmptyLStack(s))
				printf("ջ��Ϊ��\n");
				else
				printf("ջ����Ϊ��\n");
                break;
            }
            case 3:
                if(!getTopLStack(s,&e))
                    printf("��ջ��\n");
                else 
                    printf("ջ��Ԫ��Ϊ%d\n",e);
                break;
            case 4:
                clearLStack(s);
                printf("ջ����գ�\n");
                break;
            case 5:
                destroyLStack(s);
                printf("ջ�����٣�\n");
                break;
            case 6:
                LStackLength(s);
                break;
            case 7:
            	printf("��������Ҫ�����ջԪ�أ�\n");
				scanf("%d",&e);
                pushLStack(s,e);
                break;
            case 8:
                if(popLStack(s))
                printf("��ջ��Ԫ���ǣ�%d\n",e);
                break;
            case 9:
                break;
            default :
                printf("������ѡ��\n");
        }
    }
}*/


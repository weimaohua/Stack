#include"SqStack.h"
#include <malloc.h>
#include<stdio.h>
SqStack *initStack(SqStack *s)//��ʼ��ջ
{
    int i;
    s=(SqStack*)malloc(sizeof(SqStack));
    s->top=-1;
    s->size=0;
    printf("������˳��ջ������Ԫ�أ���-1������:\n");
    scanf("%d",&i);
    while(i!=-1){
        s->top++;
        s->size++;
        s->elem[s->top]=i;
        scanf("%d",&i);
    }
    printf("�ɹ�����˳��ջ��\n");
    return s;
}

Status isEmptyStack(SqStack *s)//�ж�ջ�Ƿ�Ϊ��
{
    if(s->top>=0)
    	printf("���ǿ�ջ��\n");
    else
    	printf("�ǿ�ջ��\n");
}

Status getTopStack(SqStack *s)//�õ�ջ��Ԫ��
{
	if(s->top<0)
        return ERROR;
    else
        return SUCCESS;
}

Status clearStack(SqStack *s)//���ջ
{
    s->top=-1;
}

Status destroyStack(SqStack *s)//����ջ
{
    s->top=-1;
    s->size=0;
    return SUCCESS;
}
Status stackLength(SqStack *s)//���ջ����
{
    printf("ջ�ĳ���Ϊ%d\n",s->size);
}
Status pushStack(SqStack *s)//��ջ
{
    ElemType data;
    printf("�����������������֣�\n");
    scanf("%d",&data);
    if(s->top==maxsize-1)
        printf("ջ������\n");
    else
    {
        s->top++;
        s->size++;
        s->elem[s->top]=data;
    }
    printf("Ԫ������ջ��\n");
    return SUCCESS;
}
Status popStack(SqStack *s)//��ջ
{
    if(s->size==0)
        printf("��ջ\n");
    else{
        s->top--;
        printf("��ջ��Ԫ���ǣ�%d\n",(s->elem[s->top+1]));
    }
}

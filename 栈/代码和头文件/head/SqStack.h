#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define maxsize 100

typedef enum Status 
{
	ERROR = 0, SUCCESS = 1
} Status;

typedef int ElemType;

typedef struct SqStack 
{
	ElemType *elem;
	int top;
	int size;
} SqStack;


//���������˳��ջ
SqStack *initStack(SqStack *s);//��ʼ��ջ
Status isEmptyStack(SqStack *s);//�ж�ջ�Ƿ�Ϊ��
Status getTopStack(SqStack *s); //�õ�ջ��Ԫ��
Status clearStack(SqStack *s);//���ջ
Status destroyStack(SqStack *s);//����ջ
Status stackLength(SqStack *s);//���ջ����
Status pushStack(SqStack *s);//��ջ
Status popStack(SqStack *s);//��ջ
void menu();
int option();


#endif 

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


//基于数组的顺序栈
SqStack *initStack(SqStack *s);//初始化栈
Status isEmptyStack(SqStack *s);//判断栈是否为空
Status getTopStack(SqStack *s); //得到栈顶元素
Status clearStack(SqStack *s);//清空栈
Status destroyStack(SqStack *s);//销毁栈
Status stackLength(SqStack *s);//检测栈长度
Status pushStack(SqStack *s);//入栈
Status popStack(SqStack *s);//出栈
void menu();
int option();


#endif 

#include"SqStack.h"
#include <malloc.h>
#include<stdio.h>
SqStack *initStack(SqStack *s)//初始化栈
{
    int i;
    s=(SqStack*)malloc(sizeof(SqStack));
    s->top=-1;
    s->size=0;
    printf("请输入顺序栈的整形元素（以-1结束）:\n");
    scanf("%d",&i);
    while(i!=-1){
        s->top++;
        s->size++;
        s->elem[s->top]=i;
        scanf("%d",&i);
    }
    printf("成功建立顺序栈！\n");
    return s;
}

Status isEmptyStack(SqStack *s)//判断栈是否为空
{
    if(s->top>=0)
    	printf("不是空栈！\n");
    else
    	printf("是空栈！\n");
}

Status getTopStack(SqStack *s)//得到栈顶元素
{
	if(s->top<0)
        return ERROR;
    else
        return SUCCESS;
}

Status clearStack(SqStack *s)//清空栈
{
    s->top=-1;
}

Status destroyStack(SqStack *s)//销毁栈
{
    s->top=-1;
    s->size=0;
    return SUCCESS;
}
Status stackLength(SqStack *s)//检测栈长度
{
    printf("栈的长度为%d\n",s->size);
}
Status pushStack(SqStack *s)//入栈
{
    ElemType data;
    printf("请输入你想插入的数字：\n");
    scanf("%d",&data);
    if(s->top==maxsize-1)
        printf("栈已满！\n");
    else
    {
        s->top++;
        s->size++;
        s->elem[s->top]=data;
    }
    printf("元素已入栈！\n");
    return SUCCESS;
}
Status popStack(SqStack *s)//出栈
{
    if(s->size==0)
        printf("空栈\n");
    else{
        s->top--;
        printf("出栈的元素是：%d\n",(s->elem[s->top+1]));
    }
}

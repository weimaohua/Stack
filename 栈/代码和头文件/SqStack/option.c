#include"SqStack.h"
#include <malloc.h>
#include<stdio.h>
int option()
{
		SqStack *s;
	int choice=-1;
    while(choice!=9)
    {
        menu();
        printf("请输入你的选择：\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                s=initStack(s);
                break;
            case 2:
            {
                isEmptyStack(s);
                break;
            }
            case 3:
                if(!getTopStack(s))
                    printf("空栈！\n");
                else 
                    printf("栈顶元素为%d\n",(s->elem[s->top]));
                break;
            case 4:
                clearStack(s);
                printf("栈已置空！\n");
                break;
            case 5:
                destroyStack(s);
                printf("栈已销毁！\n");
                break;
            case 6:
                stackLength(s);
                break;
            case 7:
                pushStack(s);
                break;
            case 8:
                popStack(s);
                break;
            case 9:
                break;
            default :
                printf("请重新选择\n");
        }
    }
}

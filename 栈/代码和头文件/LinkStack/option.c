#include "LinkStack.h"
#include <malloc.h>
#include<stdio.h>
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
}

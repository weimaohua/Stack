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
        printf("���������ѡ��\n");
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
                    printf("��ջ��\n");
                else 
                    printf("ջ��Ԫ��Ϊ%d\n",(s->elem[s->top]));
                break;
            case 4:
                clearStack(s);
                printf("ջ���ÿգ�\n");
                break;
            case 5:
                destroyStack(s);
                printf("ջ�����٣�\n");
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
                printf("������ѡ��\n");
        }
    }
}

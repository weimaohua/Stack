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
}

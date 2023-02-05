#include<stdio.h>
#include<stdlib.h>
int main()
{
	int top=-1;
	int item[100],size;
	int i,ch,ele;
    printf("Enter the size of stack");
    scanf("%d",& size);
	printf("\nEnter the elements in the stack :");
	for(i=0;i<size;i++)
	{
		scanf("%d",&item[i]);
	}
	label1:
	printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
	printf("\nEnter your choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				if(top==size-1)
				{
					printf("\nStack Overflow");
					exit (0);
				}
				else
				{
					printf("\nEnter the element you want to insert :");
					scanf("%d",&ele);
					top++;
					item[top]=ele;
					printf("\n!!!The elements is inserted!!!");
				}
				goto label1;
				break;
			}
		case 2:
			{
				if(top == -1)
				{
					printf("\nStack Empty");
					exit (0);
				}
				else
				{
					printf("\nItem is Deleted");
				}
				goto label1;
				break;
			}
		case 3:
			{
				if(top == -1)
				{
					printf("\nStack is Empty \n");
				}
				else
				{
					for(i=top;i>=0;i--)
					{
						printf("\n %d",item[i]);
					}
					printf("\n");
				}
				goto label1;
				break;
			}
		default :
			{
				printf("\n!!!Invalid Choice!!!");
				goto label1;
				break;
			}
	}
	return 0;
}
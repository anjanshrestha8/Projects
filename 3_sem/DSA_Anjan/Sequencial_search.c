//Sequential Search
#include<stdio.h>
int main()
{
	int i=0,flag=0,n=10,search;
	int a[100];
    printf("Enter the no of items you want to store.\n");
    scanf("%d",&n);
	printf("\nEnter the list of items to be stored :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the item to be searched :");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nSuccessful Search");
		printf("\nposition =%d",i+1);
	}
	else
	{
		printf("\nUnsucessful Search");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int mid1=0,l=0,flag=0,n,key,A[100],mid2=0,i;
	printf("\nEnter the no of data to be stored :");
	scanf("%d",&n);
	int h=n-1;
	printf("\nEnter the list of items :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\nEnter the item to be searched :");
	scanf("%d",&key);
	while(l<=h)
	{
		mid1=l+h;
		mid2=mid1/2;
		if(A[mid2]<key)
		{
			l=mid2+1;
		}
		else if(A[mid2]>key)
		{
			h=mid2-1;
		}
		else
		{
			flag=1;
			break;	
		}
	}
	if(flag==1)
	{
		printf("\nSuccessfull Search happen");
	}
	else
	{
		printf("\nUnSuccessfull Search happen");
	}
	return 0;
}

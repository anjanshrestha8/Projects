//bubble sort
#include<stdio.h>
int main()
{
	int i=0,n,j,a[100],temp=0;
	printf("\nEnter the no of data to be stored :");
	scanf("%d",&n);
	printf("\nEnter the list of items to be sort :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The sort is:-");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
		printf("%d \n",a[i]);
	}
	return 0;
}

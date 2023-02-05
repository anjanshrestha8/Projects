//WAP to pass structure array in function...
#include<stdio.h>
struct emp
{
	int id;
	int salary;
}x[3];
int kist(struct emp []);
int main()
{
	int i=0;
	printf("\n Enter details::");
	for(i=0;i<3;i++)
	{
		printf("\nEnter the id of %d person::",i+1);
		scanf("%d",&x[i].id);
		printf("\nEnter the salary of %d person::",i+1);
		scanf("%d",&x[i].salary);
	}
	kist(x);
}
int kist(struct emp y[])
{
	int r=0;
	printf("\n The Details are::");
	for(r=0;r<3;r++)
	{
		printf("\n%d\t%d",y[r].id,y[r].salary);
	}
    return 0;
}
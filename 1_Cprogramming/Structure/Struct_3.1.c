#include<stdio.h>
struct students
{
    int id;
    char name[42];
    char email[20];
    int marks;
}s[5],temp;
int main()
{
    int i=0,j=0;
    printf("Enter the Detail of Student:");
    for(i=0;i<5;i++)
    {
        printf("\nEnter ID: ");
        scanf("%d",&s[i].id);
        fflush(stdin);
        printf("\nEnter Name: ");
        gets(s[i].name);
        fflush(stdin);
        printf("\nEnter Email: ");
        gets(s[i].email);
        fflush(stdin);
        printf("\nEnter Marks: ");
        scanf("%d",&s[i].marks);
        fflush(stdin);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-1;j++)
        {
            if(s[j].marks<s[j+1].marks)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    printf("\nStudent info: \n");
    printf("\nID\tNAME\tEmail\t\t\tMARKS\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t%s\t%s\t%d\n",s[i].id,s[i].name,s[i].email,s[i].marks);
    }
    return 0;
}
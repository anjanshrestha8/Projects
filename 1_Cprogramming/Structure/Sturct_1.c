#include<stdio.h>
#include<stdlib.h>
struct emp
{
    int salary;
    int id;
    char name[42];

}s[3];
int main()
{
    printf("Enter the detail of the employee:\n");
    for(int i=0;i<3;i++)
    {
        printf("Enter the id: ");
        scanf("%d",&s[i].id);
        fflush(stdin);
        printf("Enter the name");
        gets(s[i].name);
        fflush(stdin);
        printf("Enter the salary: ");
        scanf("%d",&s[i].salary);
        fflush(stdin);
    }
    printf("Id is %d",s[0].id);
    return 0;
}

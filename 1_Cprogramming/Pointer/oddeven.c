#include<stdio.h>
int main()
{
    int num;
    int *p;
    p = &num;
    printf("Enter any integer number: ");
    scanf("%d",&p);
    if(num%2==0)
    {
        printf("The given number is Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    return 0;
}
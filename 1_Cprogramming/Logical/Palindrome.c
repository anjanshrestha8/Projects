//
#include<stdio.h>
int main()
{
    int num,rem,sum=0,temp=0;
    printf("Enter any integer: ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    printf("The reverse number is %d\n",sum);
    if(temp==sum)
    {
        printf("The given number is palindrome.");
    }
    else
    {
        printf("The given number is not palindrome");
    }
    return 0;
}
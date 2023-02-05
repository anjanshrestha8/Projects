/*Write the program to print a Fibonacci Series up to n term.*/
#include<stdio.h>
int main()
{
    int a=0,b=1,i;
    int n,temp=a+b;
    printf("Enter the no of the term you want to print Fibonacci Series.\n");
    scanf("%d",&n);
    printf("The Fibonacci Series is as follow:-\n");
    printf("%d\n%d\n",a,b);
    for(i=1;i<=n;i++){
        printf("%d\n",temp);
        a=b;
        b=temp;
        temp=a+b;
    }
 
        


}

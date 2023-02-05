#include<stdio.h>
int main()
{
    int a,b;
    int temp;
    printf("Enter the numbers");
    scanf("%d%d",&a,&b);
    temp=b;
    b=a;
    a=temp;
    printf("swap value ");
    printf("a=%d\n",a);
     printf("b=%d",b);
     return 0;
     
    

}
/*WAP to to swap a variables.*/
#include<stdio.h>
int main(){
    int a,b,temp;
    int *p,*q;
    p=&a;
    q=&b;
    printf("Enter the number of variables");
    scanf("%d%d",&a,&b);
    printf("the real value is a=%d b=%d",a,b);
    temp=*p;
    *p=*q;
    *q= temp;
    printf("the swap value are a=%d,b=%d",a,b);
}
/* WAP to find sum of Natural Numbers Using Recursion.*/
#include<stdio.h>
int sum(int);
int main()
{
    int a,result;
    printf("Enter the natural number up to which sum has to calculate.\n");
    scanf("%d",&a);
    result=sum(a);
    printf("The sum of the natural number up to %d is %d",a,result);
    return 0;
}
int sum(n){
    if(n>0){
        return n+sum(n-1);
    }
    else{
        return 0; 
    }
}
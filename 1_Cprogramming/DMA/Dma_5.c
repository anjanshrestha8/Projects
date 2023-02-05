/* Write a program using DMA to take 10 numbers from user and find sum of all 10 digits, and check whether sum is Armstrong or not.*/
#include<stdio.h>
int main(){
    int a[10],i,sum;
    int *p;
    int temp,rev,rem,c;
    p=a;
    printf("Enter the integers.");
    for(i=0;i<=9;i++){
        scanf("%d",p+i);
        sum=sum+*(p+i);
    }
    temp=sum;
    printf("The sum of the numbers is %d",temp);
    while(sum>0){
        rem=rem%10;
        c=rem*rem*rem;
        rev=rev+c;
        rem=rem/10;
        
    }
    if(temp==rev){
        printf("the sum is armstrong");
    }
    else{
        printf("the sum is not armstrong");
    }
}
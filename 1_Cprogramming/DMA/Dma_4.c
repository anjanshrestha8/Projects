/* Write a program using DMA to take 10 numbers from user and find sum of all 10 digits, and check whether sum is palindrome or not.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10],i,j,sum;
    int*p;
    int temp,rem,rev;
    p=a;
    p=(int*)malloc(sizeof(int));
    printf("Enter the 10 numbers.");
    for(i=0;i<=9;i++){
        scanf("%d",p+i);
        sum=sum+*(p+i);
    }
    temp=sum;
    printf("The sum of the numbers is %d",temp);
    while(sum<10){
        rem=sum%10;
        rev=rev*10+rem;
        sum=sum%10;
    }
    if(temp==rev){
        printf("The sum is palimdriome.");
    }
    else{
        printf("The sum is not palindrome.");
    }
    
}
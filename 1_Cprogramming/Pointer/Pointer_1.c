/*1.	Write a program to add all the even numbers in an array and display result using pointers only.*/
#include<stdio.h>
int main(){
    int a[10];
    int *p;
    int i=0,sum;
    p=a;
    printf("Enter the numbers.\n");
    for(i=0;i<=5;i++){
        scanf("%d",p+i);
        if(*(p+i)%2==0){
            sum=sum+*(p+i);

        }
    }
    printf("the sum of the even number is%d",sum);
     
}
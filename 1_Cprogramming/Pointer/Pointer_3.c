/*	Write a program to enter 10 numbers and calculate even and odd numbers count using pointers only.*/
#include<stdio.h>
int main(){
    int a[10],i,j=0,k=0;
    int *p;
    p=a;
    printf("Enter the 10 integers.\n");
    for(i=0;i<=9;i++){
        scanf("%d",p+i);
        if(*(p+i)%2==0){
            j++;
        }
        else{
            k++;
        }
    }
    printf("the even numbersis %d",j);
    printf("the odd numbersis %d",k);
}

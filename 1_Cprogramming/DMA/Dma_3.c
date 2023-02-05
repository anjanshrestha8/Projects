/*	Write a program using DMA to take 10 numbers from user and arrange them in reverse order.*/
#include<stdio.h>
int main(){
    int a[10],i,j,b[10];
    int *p,*q;
    p=a;
    q=b;
    p=(int*)malloc(10*sizeof(int));
    q=(int*)malloc(10*sizeof(int));
    printf("Enter the integers:\n");
    for(i=0;i<=9;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<=9;i++){
        *(q+i)=*(p+(9-i));
    }
    for(i=0;i<=9;i++){
        *(p+i)=*(q+i);
    }
    printf("The reverse of the array is:");
    for(i=0;i<=9;i++){
        printf("%d\n",*(p+i));
    }
}
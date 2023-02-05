/* 	Write a program to find highest value amongst 10 numbers given by user using pointers.*/
#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    int *p;
    p=a;
    printf("Enter the integer.\n");
    for(i=0;i<=4;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<=4;i++){
        for(j=0;j<=4;j++){
            if(*(p+i)<*(p+j)){
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    printf("The highest number is %d",*(p+4));
}
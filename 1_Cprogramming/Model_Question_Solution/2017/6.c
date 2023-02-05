/*Swap the number using call with refrence.*/
#include<stdio.h>
int swap(int *,int*);
int main(){
    int a,b,result;
    printf("Enter the values os the number.");
    scanf("%d%d",&a,&b);
    result=swap(&a,&b);
}
int swap(int *p,int*q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("the value of a=%d",*p);
     printf("the value of b=%d",*q);

}

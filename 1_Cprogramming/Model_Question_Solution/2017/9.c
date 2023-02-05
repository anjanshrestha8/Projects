/*WAP to find the sum of the elements of array using DMA.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,sum=0;
    int *p;
    printf("Enter the size of the array.");
    scanf("%d",p+i);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("Enter the numbers %d",i+1);
        scanf("%d",p+i);
        sum=sum+*(p+i);
    }
    printf("the sum of the elemnts is %d",sum);
    free(p);

}
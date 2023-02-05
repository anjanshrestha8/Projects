/* Write a program to add two arrays and count number of odd numbers in the final result using pointers only,*/
#include<stdio.h>
int main()
{
    int a[10],b[10],sum[10],i=0,j=0,odd;
    int *x,*y,*s;
    x=a;
    y=b;
    s=sum;
    printf(" Enter the integers;\n");
    for(i=0;i<=9;i++){
        scanf("%d",x+i);
    }
    printf(" Enter the integers;\n");
    for(i=0;i<=9;i++){
        scanf("%d",y+i);
    }
    for(i=0;i<=9;i++){
        *(s+i)=*(x+i)+*(y+i);
    }
    printf("The sum of the array is :");
    for(i=0;i<=9;i++){
        printf("%d\n",*(s+i));
        if(*(s+i)%2==0){
            j++;
        }
    }
    odd=10-j;
    printf("There are %d odd in the result:",odd);
}
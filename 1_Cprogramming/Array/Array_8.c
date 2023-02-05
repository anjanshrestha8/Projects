/*	WAP to take 10 numbers from user and display the numbers in ascending order, counting total number 
    of digits which are odd.
*/
#include<stdio.h>
int main()
{
    int a[5],i,j,temp,d=0,b;
    printf("Enter the numbers.\n");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
        b=a[i];
        if(b%2!=0){
            d++;
        }
    }
    printf("The numbers in ascending number :\n");
    for(i=0;i<=4;i++){
        for(j=0;j<=4;j++){
            if(a[j]>a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<=4;i++){
        printf("%d\n",a[i]);
    }
   
    printf("There are %d odd numbers:\n",d);
}
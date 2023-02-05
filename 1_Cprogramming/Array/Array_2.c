/*   WAP to take 10 numbers from user and only display numbers which are prime.*/
#include<stdio.h>
int main()
{
    int a[5],i=0,j=0,b=0,count=0;
    printf("Enter the intgers.\n");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    printf("The prime numbers are:\ni");
    for(i=0;i<=4;i++){
        b=a[i];
        count=0;
        for(j=2;j<b;j++){
            if(b%j==0){
                count=1;
                break;
            }
        }
        if(count==0){
                 printf("%d \n",a[i]);
        }
         
    }
 
}



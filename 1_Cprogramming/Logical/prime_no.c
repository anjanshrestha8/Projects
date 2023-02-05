#include<stdio.h>
int main()
{
    int a,i,b,count=0;
    printf("Enter the number .\n");
    scanf("%d",&a);
  
    for (i=1;i<=a;i++)
    {
        
        b=a%i;
        if(b==0)
        {
             count++;
        } 
        
    }
    if(count==2)
        {
              printf("the prime number \n %d",a);
        }
        else
        {
            printf("the entered number is not a prime number");
        }
    return 0;
}
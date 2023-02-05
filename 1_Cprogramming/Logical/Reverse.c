#include<stdio.h>
int main()
{
    int a=0,r=0,sum=0;
    printf("Enter the number you want to reverse.\n");
    scanf("%d",&a);
    while (a>0)
    {
        r=a%10;
        sum=sum*10+r;
        a=a/10;
    }
    printf("The reverse of the number %d is %d",a,sum);
    return 0;
    
}

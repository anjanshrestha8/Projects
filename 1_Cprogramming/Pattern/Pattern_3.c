#include<stdio.h>
int main()
{
    int i=0,j=0,k=0,l=1;

    for(i=1;i<=4;i++) 
    {
        
        for(k=0;k<=4-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf(" %d",l);
        }
        l=l+2;
        printf("\n");
    }
    return 0;
}
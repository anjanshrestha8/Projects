//2 3 5 7 11 13 17 19 23 29 31 37 
#include<stdio.h>
int main()
{
    int b,i,j,flag;
    printf("Enter the range: ");
    scanf("%d",&b);
    for(i=0;i<=b;i++)
    {
        //skip 0 and 1 as they are nither prime nor composite 
        if(i==1||i==0)
            continue;
        //flag variable to tell if i is prime or not
        flag = 1;

        for(j=2;j<=i/2;++j)
        {
            if(i%j==0)
            {
                flag =0;
                break;
            }
        }
        //flag = 1 means i is prime and flag = 0 means i is not prime
        if(flag==1)
            printf(" %d",i);
    }
    return 0;
}


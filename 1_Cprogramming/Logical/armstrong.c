/*
#include<stdio.h>
int main()
{
    int a,r,c,sum =0,temp;
    printf("Enter the the you want to check weather its armstrong or not.\n");
    scanf("%d",&a);
    temp=a;
    while(a>0){
        r=a%10;
        c=r*r*r;
        sum=sum+c; 
        a=a/10;
    }
    if (sum ==temp){
        printf("The number is armstrong number.");
    }
    else {
        printf("The number is not a armstrong number.");
    }
    return 0;


}
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int num,temp,rem,n=0;
    float result;
    printf("Enter an integer:");
    scanf("%d",&num);
    temp=num;
    for(temp=num;temp!=0;n++)
    {
        temp=temp/10;
    }
    for(temp=num;temp!=0;temp=10)
    {
        rem=temp%10;
        result=result+pow(rem,n);
    }
    if((int)result==num)
    {
        printf("%d is an Armstrong number\n",num);
    }
    else
    {
        printf("%d is not an Armstrong number",num);
    }
    return 0;
}
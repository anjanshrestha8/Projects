/* WAP to find wheter the no is armstrong or not using function.*/
#include<stdio.h>
#include<math.h>
int arm (int a);
int main(){
    int num,result;
    printf("Enter the number.");
    scanf("%d",&num);
    result=arm(num);
    if(result==1){
        printf("The number is armstrong.");
    }
    else{
        printf("The number is not armstrong");
    }

}
int arm(int x){
    int rem,sum=0;
    int temp,temp1,count=0;
    temp=x;
    temp1=x;
    while(x>0){
        
        count++; //1
        x=x/10; //15
     }
     while(temp>0){
         rem=temp%10;
         sum=sum+pow(rem,count);
         temp=temp/10;
     }


     if(sum==temp1){
         return 1;
     }
     else{
         return 0;
     }
}

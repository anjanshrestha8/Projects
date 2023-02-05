/*	Write a program using function to check whether number is prime or not. (with value, with return).*/
#include<stdio.h>
int prime(int);
int main(){
    int a,result;
    int i,j;
    printf("Enter the number:");
    scanf("%d",&a);
    result=prime(a);
    if(result==1){
        printf("The number is a prime number.\n");
    }
    else{
        printf("The number is not a prime number.\n");
    }
}
int prime(x){
    int y=0,i=0;
   for(i=1;i<=x;i++){
       if(x%i==0){
           y++;
       }
   }
   if(y==2){
       return 1;
   }
   else {
       return 0;
   }
} 
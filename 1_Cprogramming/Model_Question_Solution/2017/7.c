/*WAP wheather the number is palindrome or not.*/
#include<stdio.h>
int main(){
    int a;
    int rem=0,rev=0,temp=0;
    printf("enter the number.");
    scanf("%d",&a);
    temp=a;
    while(a!=0){
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    printf("The reverse of the number is %d",rev);
   if(rev==temp){
        printf("it is a palindrome");
   }
   else{
        printf("it is not a plaindrome.");
   }
}
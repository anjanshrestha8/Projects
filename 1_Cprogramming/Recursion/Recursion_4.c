/* WAP to find factorial of a given number using recursion. */
#include<stdio.h>
int fact(int);
int main(){
    int a,result;
    printf("Enter the number you want to find the factorial.\n");
    scanf("%d",&a);
    result=fact(a);
    printf("The factorial of %d is %d",a,result);
    return 0;
}
int fact(x){
    if(x==1){
        return 1;
    }
    else{
        return x * fact(x-1);
    }

}
/*Write a program to find the prime number.*/
#include<stdio.h>
int prime();
int main(){
    int result;
    result=prime();
    if(result==1){
        printf("it is a prime number.");
    }
    else{
        printf("it is not a prime number ");
    }

    
}
int prime(){
    int a,i,count=0s;
    printf("Enter the number.");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    else {
        return 0;
    }

}
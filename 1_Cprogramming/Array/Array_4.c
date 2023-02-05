/*	WAP to take 10 numbers from user and count how many even and odd numbers are present. */
#include<stdio.h>
int main(){
    int a[5],i=0,b=0,c,d;
    printf("Enter the integer.\n");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
        b=a[i];
        if(b%2==0){
            c++;
        }
        else{
            d++;
        }
    }
    printf("even=%d",c);
    printf("odd=%d",d);
}
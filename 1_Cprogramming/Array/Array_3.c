/*	WAP to take 10 numbers from user and arrange them in reverse order.  */
#include<stdio.h>
int main(){
    int i=0,j=0,a[5],b[5];
    printf("Enter the numbers.\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("The reverse order:\n");
    for(i=4;i>=0;i--){
        b[i]=a[4-i];
    }
    
    for(i=0;i<=4;i++){
        a[i]=b[i];
        printf("%d\n",a[i]);
    }
    
    return 0;

}

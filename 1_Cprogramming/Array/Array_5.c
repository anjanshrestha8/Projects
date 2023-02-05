/*	WAP to take 3x3 matrix input from user and calculate sum of diagonal elements. */
#include<stdio.h>
int main(){
    int a[3][3],i,j,sum;
    printf("Enter the elements of matrix.\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
            if(i==j){
                sum=sum+a[i][j];
            }
        }
    }
    printf("Sum=%d",sum);
}
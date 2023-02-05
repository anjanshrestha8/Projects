/*	WAP to take 3x3 matrix input from user and calculate sum of four corners element.*/
#include<stdio.h>
int main(){
    int a[3][3],i,j,sum;
    printf("Enter the elements of the matrix.\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    sum=a[0][0]+a[0][2]+a[2][0]+a[2][2];
    printf("The sum of the four corner elements is : %d",sum);
}
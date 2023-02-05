/* Write a program, using pointer, to find transpose of the matrix.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[2][2],b[5][5];
    int *p,*g;
    int i=0,j=0;
    p=a;
    g=b;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("element[%d][%d]",i,j);
            scanf("%d",*(p+i)+j);
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            *(*(g+j)+i)= *(*(p+i)+j);
        }
    
    }
  for(i=0;i<2;i++){
      for(j=0;j<2;j++){
            printf("%d",*(*(b+j)+i));
      }
  }
}

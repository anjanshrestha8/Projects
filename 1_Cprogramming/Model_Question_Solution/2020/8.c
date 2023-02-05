/*WAP to multiply the number.*/
#include<stdio.h>
int main(){
  int a[10][10],b[10][10],i,j,k,m,n,p,q;
  int sum,c[10][10];
  printf("Enter the rows and the colums");
  scanf("%d%d",&m,&n);
  
  printf("Enter the elements of first matrix");
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
  }
  printf("Enter the rows and the colums");
  scanf("%d%d",&p,&q);
  if(n!=p){
    printf("Multiplication cannot be done.");
  }
  else{
    printf("Enter the elements of second matrix");
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<m;i++){
    for(j=0;j<q;j++){
      for(k=0;k<p;k++){
        sum=sum+a[i][k]*b[k][j];
        c[i][j]=sum;
      }
    }
  }
printf("The product is");
for(i=0;i<m;i++){
  for(j=0;j<q;j++){
    printf("d\t",c[i][j]);
  }
  printf("\n");
}
  
printf("The tranpose of teh matrix is:");
for(i=0;i<q;i++){
  for(j=0;j<m;j++){
    printf("%d",c[j][i]);
  }
  printf("\n");
}



}}

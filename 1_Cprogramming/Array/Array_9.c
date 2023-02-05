
//wap to enter n numbers in an array , and compute the sum of only prime number in the array.
#include<stdio.h>
int main(){
  int a[5],i,j,n,count,sum=0;
  for(i=0;i<=4;i++){
    printf("Enter the number");
    scanf("%d",&a[i]);

  }
  for(i=1;i<=a[i-1];i++){
    if(a[i-1]%i==0){
      count++;
    }
    if(count==2){
      sum=sum+a[i-1];
    }
  }
  printf("the sum is %d",sum);
  
  
  
}
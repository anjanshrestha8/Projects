/*Write a program to read temperature of N days, where N is integer number 
entered by the user. Sort them in ascending order using pointer concept and 
display the result*/
#include<stdio.h>
int main(){
    int N,i,j,temp;
    int a[100];
    int *p;
    p=a;
    printf("Enter the no of days.");
    scanf("%d",&N);
    for(i=0;i<N;i++){
      printf("Enter the temperature of the %d days",i+1);
      scanf("%d",p+i);
    }
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(*(p+i)>*(p+j)){
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
                
                

            }
        }
        
    }
    printf("The ascending order of temperature is :");
    for(i=0;i<N;i++){
        printf("%d",*(p+i));
    }
   

}
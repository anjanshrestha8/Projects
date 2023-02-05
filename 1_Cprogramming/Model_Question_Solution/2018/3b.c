/*WAP to find the largest number of the array using DMA.*/
#include<stdio.h>
#include<stdlib.h>  
int main(){
    int a,temp=0,i,j;
    int *p,n;
    printf("Enter the no of array u want to store.");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("Memory is not located.");
        exit(0);
    }
    else{
        printf("Enter the values.");
        for(i=0;i<n;i++){
            scanf("%d",(p+i));
        }
        for(i=0;i<n;i++){
            
           if(*p<*(p+i))   
            {
                *p=*(p+i);
            }
        }
        printf("The largest number is %d",*p);

    }
    

}
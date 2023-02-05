/*	   5 4 3 2 1
       5 4 3 2
       5 4 3
       5 4
       5
*/
#include<stdio.h>
int main(){
    int i=0,j=0;
    for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
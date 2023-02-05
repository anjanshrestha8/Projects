/* Write the programme of pattern.
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6 
*/
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=6;i++){
        for(j=1;j<=i;j++){
            printf("%d\t",j);
        }
        printf("\n");
    }

}

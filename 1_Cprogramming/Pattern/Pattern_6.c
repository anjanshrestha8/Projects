/*                          *
                        *   *  *
                   *    *   *   *   *
              *    *    *   *   *    *    *
          *   *    *    *   *   *    *    *   *
*/
#include<stdio.h>
int main()
{
    int i=0,j=0,k=0;
    for(i=1;i<=5;i++){
        for(k=i;k<=4;k++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
         printf("\n");
    }
    return 0;
}
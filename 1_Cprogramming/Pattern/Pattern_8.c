/*      $   *   $   *
        *   $   *   $
        $   *   $   *
        *   $   *   $
*/
#include<stdio.h>
int main()
{
    int i=0,j=0,sum=0,b=0;
    for(i=1;i<=4;i++){          
        for(j=1;j<=4;j++){          //for(j=1;)
            sum=i+j;
            b=sum%2;
            if(b==0){
                printf("$");
            }
            else{
                printf("*");
            }
        }
    printf("\n");
    }
    return 0;
}

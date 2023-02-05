/*	WAP to take two 3X3 matrix, add them and display transpose of final result. */
#include<stdio.h>
int main(){
    int a[3][3],b[3][3],i,j,sum[3][3],transpose[3][3];
    printf("Enter th elements of first matrix.\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the elements of second matrix.\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("The result of the adding matrix is :\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the result is :\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            transpose[j][i]=sum[i][j];
              printf("%d\t",transpose[i][j]);
            
        }
        printf("\n");
    }
    /*for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
             printf("%d\t",transpose[i][j]);
          
        }
       printf("\n");
    }*/
    


}
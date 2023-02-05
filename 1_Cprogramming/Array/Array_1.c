//Sorting array in ascending and descending order
#include<stdio.h>
int main()
{
    int a[100],n,i,temp;
    printf("Array size:");
    scanf("%d",&n); 
    printf("Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)  //for ascending
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]>a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nAscending: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    for(int i=0;i<n;i++)  //for descending
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nDescending: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
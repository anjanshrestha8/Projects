#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num=0;
    FILE *p;
    p=fopen("program_2.txt","w+");
    if(p==NULL)
    {
        printf("FILE WAS NOT FOUND");
        exit(0);
    }
    printf("Enter any number:\n");
    scanf("%d",&num);
    fprintf(p,"The entered number is %d",num);
    fclose(p);
}
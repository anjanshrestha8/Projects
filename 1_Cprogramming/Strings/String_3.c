/*  WAP to compare whether two strings are identical or not without using string handling function. */
#include<stdio.h>
int main(){
    char a[10],b[10];
    int i=0,count=0;
    printf("Enter the string.\n");
    gets(a);
    printf("Enter second string.\n");
    gets(b);
    for(i=0;a[i]!='\0';i++){
        if(a[i]!=b[i]){
            count++;
            break;
        }
       
    }
    if(count==0){
        printf("The string are identical.\n");
    }
    else{
        printf("The string are not identical.\n");
    }
    return 0;

}
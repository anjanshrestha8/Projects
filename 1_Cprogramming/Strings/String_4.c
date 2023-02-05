/*	WAP to count no of spaces, vowels in a sentence input by the user. */
#include<stdio.h>
int main(){
    char a[100];
    int i,space=0,vowels=0;
    printf("Enter the string.\n");
    gets(a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]==' '){
            space++;
        }
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
            vowels++;
        }
        

    }
    printf("There are %d spaces.\n",space);
    printf("There are %d vowels.\n",vowels);
}
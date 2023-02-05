/*	WAP to print ASCII values of each and every character of
    the string given by the user.
*/
#include<stdio.h>
int main()
{
    char a[10];
    int i=0;
    printf("Enter the string.\n");
    gets(a);
    for(i=0;i<=9;i++){
        printf("The ASCII Value of the String %c is = %d",a[i],a[i]);
        printf("\n");
    }

    return 0; 
    
}
/* 
#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50];
    int i=0;
    printf("Enter the String: ");
    gets(str);
    while(str[i]!='\0')
    {
        printf("\nASCII Value of %c = %d", str[i], str[i]);
        i++;
    }
    getch();
    return 0;
}

*/
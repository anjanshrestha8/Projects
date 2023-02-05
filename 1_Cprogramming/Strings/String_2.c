/* WAP to reverse a string without using string handling function.*/
#include<stdio.h>
int main()
{
    char a[10],b[10];
    int i=0,j=0,count=0;
    printf("Enter the string.\n");
    gets(a);
   for(i=0;a[i]!='\0';i++){
       count ++;
    }
    j=count-1;
   printf("The revrse string is :\n");
   for(i=0;a[i]!='\0';i++){
       b[i]=a[j];
       j--;
       
   }
  puts(b);
  return 0;
}
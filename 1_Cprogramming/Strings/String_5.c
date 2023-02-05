/* WAP to convert a lower case string to upper case string without using string
   handelling function.
*/
#include<stdio.h>
int main(){
    char a[6],b;
    int i,j,sum;
    printf("Enter the string.\n");
    gets(a);
    
	while(a[i]!='\0')
	{
		if(a[i]>='a'&&a[i]<='z')
		a[i]=a[i]-32;
		i++;
	}
	printf("\n the uppercase string is:");
	puts(a);
	
         
            
    
}


 
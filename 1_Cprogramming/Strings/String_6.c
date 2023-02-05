#include<stdio.h>

int main()
{
	char str1[50],str2[50];
	int i=0,j=0;
	printf("\n Enter the first string:\n");
	gets(str1);
	printf("\n Enter the second string:\n");
	gets(str2);
	while(str1[i]!='\0')
	{
		i++;
	}
	str1[i]=' ';
	i++;
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		j++;
		i++;
	}
	str1[i]='\0';
	printf("\n The concatenated string is:\n");
	puts(str1);
	return 0;
}
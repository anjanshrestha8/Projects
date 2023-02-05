#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
//Code to declare function prototype
void insertData();

//Code to declare file pointer
FILE *fp,*fp1;
//Code to design structure
struct book
{
    int bn;
    char title[200];
    char sub[100];
    float price;
    int nob;
    char author[100];
    char publisher[100];
};
//Code to declare structure variable
struct book b;
//Code to declare main function


void main()
{
    int choice=0;
    int bn;
    while(1)
    {
        //Code to display menu
        
        printf("\n\t\t  *******************************");
        printf("\n\t\t  *******************************");
        printf("\n\t\t  ***LIBRARY BOOKS INFO SYSTEM***");
        printf("\n\t\t  **********KIST COLLEGE*********");
        printf("\n\n\n");
        printf("\t\t---------------------------------------\n");
        printf("\t\t\t\tMAIN MENU\n");
        printf("\t\t---------------------------------------");
        printf("\n\t\t\t1. Insert Record");
        printf("\n\t\t\t2. Display Record");
        printf("\n\t\t\t3. Update Record");
        printf("\n\t\t\t4. Delete Record");
        printf("\n\t\t\t5. Search Record");
        printf("\n\t\t\t0. Quit");
        printf("\n\n\tEnter your choice between 0 to 5 => ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            	{
            		//Code to call insertData function
                    insertData();
                    break;
				}
			case 2:
				{
					printf("Display Record");
					break;
				}
			case 3:
				{
					printf("Update Record");
					break;
				}	
			case 4:
				{
					printf("Delete Record");
					break;
				}
			case 5:
				{
					printf("Search Record");
					break;
				}
			case 0:
				{
					printf("\n\n\n\t\t\t\tThank you!!!\n\n\n\n\n");
					exit(0);
				}	
                    
            default:
            	{
                    printf("\n\a\aSORRY!!! You entered an invalid choice");
                    printf("\nPlease, Enter the valid choice between 0 to 5");   
                    clrscr();
				}
        }   
    }
    getch();
}
void insertData()
{
    char next='y';
    int duplicatebookno=0,lastbookno;
    //clrscr();
    while(next=='y'||next=='Y')
    {
    	aa:
    	//clrscr();
    	printf("\nEnter the book no ");
    	scanf("%d",&b.bn);
    	//Code to call function to check the book no. has been repeated or not
    	duplicatebookno==checkBookNo(b.bn);
    	if(duplicatebookno==1)
    	{
    		printf("\n\nThe book no. which you typed just now, is already exists in the data file!!!!");
    		printf("\n\nPlease, Enter the unique book no.!!!");
    		lastbookno=findLastBookNo();
    		printf("\n\nThe last book no. is : %d",lastbookno);
    		getch();
    		goto aa;
		}
		fflush(stdin);
		printf("\nEnter the title of the book");
		gets(b.title);
		printf("\nEnter the subject of the book");
		gets(b.sub);
		printf("\nEnter the price of the book");
		scanf("%f",&b.price);
		printf("\nEnter the no. of book");
		scanf("%d",&b.nob);
		fflush(stdin);
		printf("\nEnter the author of the book");
		gets(b.author);
		printf("\nEnter the publisher of the book");
		gets(b.publisher);
		fp=fopen("Book.dat","a");
		if(fp==NULL)
		{
			printf("\nFile creation error has occurred!!!");
		}
		else
		{
			fwrite(&b,sizeof(b),1,fp);
			fclose(fp);
			printf("\n\nDo you want to insert record of another book (Y/N)?");
			next=getche();
		}
	}
    
}

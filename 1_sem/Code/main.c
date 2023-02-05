#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<stdlib.h>
//Code to declare function prototype
void insertData();
void displayData(void);
void updateData(int);
void deleteData(int);
void searchData(void);
int checkBookNo(int);
int findLastBook(void);
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
    int choice;
    int bn;
    while(1)
    {
    	system("cls");
        //Code to display menu
        
        printf("\n\t\t*******************************");
        printf("\n\t\t*******************************");
        printf("\n\t\t***LIBRARY BOOKS INFO SYSTEM***");
        printf("\n\t\t**********KIST COLLEGE*********");
        printf("\n\t\t\t1. Insert Record");
        printf("\n\t\t\t2. Display Record");
        printf("\n\t\t\t3. Update Record");
        printf("\n\t\t\t4. Delete Record");
        printf("\n\t\t\t5. Search Record");
        printf("\n\t\t\t6. Quit");
        printf("\n\n\tEnter your choice between 1 to 6 : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                    //Code to call insertData function
                    insertData();
                    break;
            case 2:
                    //Code to call displayData function
                    displayData();
                    break;
            case 3:
                    //Code to call updateData function
                    printf("\nEnter the book no. which you want to update");
                    scanf("%d",&bn);
                    updateData(bn);
                    break;
            case 4:
                    //Code to call deleteData function
                    printf("\nEnter the book no. which you want to delete");
                    scanf("%d",&bn);
                    deleteData(bn);
                    break;
            case 5:
                    //Code to call searchData function
                    searchData();
                    break;
            case 6:
                    exit(0);
            default:
                    printf("\n\a\aSORRY!!! You entered an invalid choice");
                    printf("\nPlease, Enter the valid choice between 1 to 6");           
        }   

    }
    getch();
}
//Code to declare function defination
void insertData()
{
    char next='y';
    int duplicatebookno=0,lastbookno;
    //system("cls")
    while(next=='y'||next=='Y')
    {
    	aa:
    	//system("cls")
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
void displayData(void)
{
	system("cls");
	fp=fopen("Book.dat","r");
	rewind(fp);
	if(fp==NULL)
	{
		printf("\n\nRead operation failure as the file which your are searching does not exixt!!!");
	}
	else
	{
		printf("\n\tBook No.\tTitle\tSubject\t\tPrice\tNo. of Books\tAuthor\tPublisher");
		while(fread(&b,sizeof(b),1,fp)==1)
		{
			printf("\n\t%-8d\t%s\t%s\tRs.%2f\t%d\t%s\t%s",b.bn,b.title,b.sub,b.price,b.nob,b.author,b.publisher);
		}
		close(fp);
	}
	getch();
}
void updateData(int bn)
{
	fp=fopen("Book.dat","r");
	fp1=fopen("newBook.dat","w");
	if(fp==NULL||fp1==NULL)
	{
		printf("\nFile Operation failed.");
	}
	else
	{
		//code to show the existing data
		printf("\n\nThe followings are the existing data!!!!!");
		while(fread(&b,sizeof(b),1,fp)==1)
		{
			if(b.bn==bn)
			{
				printf("\n\tBook No.     :  %d",b.bn);
				printf("\n\tTitle        :  %s",b.title);
				printf("\n\tSubject      :  %s",b.sub);
				printf("\n\tPrice        : Rs. %2f",b.price);
				printf("\n\tNo. of Books : %s",b.author);
				printf("\n\tPublisher    : %s",b.publisher);
			}
		}
		//code to enter new data
		rewind(fp);
		printf("\n\nEnter the new correct data");
		while(fread(&b,sizeof(b),1,fp)==1)
		{
			if(bn==b.bn)
			{
				printf("\n\n\nEnter the book no");
				scanf("%d",&b.bn);
				fflush(stdin);
				printf("\nEnter the title of the book");
				gets(b.title);
				printf("\nEnter the subject of the book");
				gets(b.sub);
				printf("\nEnter the price of book");
				scanf("%f",&b.price);
				printf("\nEnter the no. of book");
				scanf("%d",&b.nob);
				fflush(stdin);
				printf("\nEnter the author of the book ");
				gets(b.author);
				printf("\nEnter the publisher of the book");
				gets(b.publisher);
				fwrite(&b,sizeof(b),1,fp1);		
			}
			else
			{
				fwrite(&b,sizeof(b),1,fp1);
			}
		}
		fclose(fp);
		fclose(fp1);
		remove("Book.dat");
		rename("newBook.dat","Book.dat");
		printf("\n\nThe record has been successfully updated in the data file");
	}
	getch();
}
void deleteData(int bn)
{
	fp=fopen("Book.dat","r");
	fp1=fopen("newBook.dat","w");
	if(fp==NULL||fp1==NULL)
	{
		printf("\nFile Operation failed");
	}
	else
	{
		while(fread(&b,sizeof(b),1,fp)==1)
		{
			if(bn==b.bn)
			{
				continue;
			}
			else
			{
				fwrite(&b,sizeof(b),1,fp1);
			}
		}
		fclose(fp);
		fclose(fp1);
		remove("Book.dat");
		rename("newBook.dat","Book.dat");
		printf("\n\nThe record has been successfully deleted from the date file.");
	}
	getch();
}
void searchData(void)
{
	int bn,found=0;
	char bname[100],subject[100];
	int ch;
	system("cls");
	printf("\n\t\t*****************************");
	printf("\n\t\t*********Search Menu*********");
	printf("\n\t\t*****************************");
	printf("\n\t1. Search by Book No.");
	printf("\n\t2. Search by Book Title ");
	printf("\n\t3. Search by Book Subject");
	printf("\b\t4. Quit Search");
	printf("\n\n Enter your choice for search");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			//search on the basis of book no.
			system("cls");
			fp=fopen("Book.dat","r");
			printf("\n\nEnter the book no. which you want to search");
			scanf("%d",&bn);
			if(fp==NULL)
			{
				printf("\nFile seach operation failed!!!!!");
			}
			else
			{
				while(fread(&b,sizeof(b),1,fp)==1)
				{
					if(b.bn==bn)
					{
						printf("\n\tBook No  : %d",b.bn);
						printf("\n\tTitle    : %s",b.title);
						printf("\n\tSubject  : %s",b.sub);
						printf("\n\tPrice     : Rs. %2f",b.price);
						printf("\n\tNo. of Books : %s",b.nob);
						printf("\n\tAuthor :%s",b.author);
						printf("\n\tPublisher : %s",b.publisher);
						found=1;
					}
				}
				if(found==0);
				{
					printf("\n!!!!!!!!!!!!!!!!!");
					printf("\nThe book which you are searching is not found");
				}
				fclose(fp);
			}
			break;
			case 2:
				//seach on the basis of book title
				system("cls");
				fflush(stdin);
				printf("\n\nEnter the title of the book which you want to search");
				gets(bname);
				fp=fopen("Book.dat","r");
				if(fp==NULL)
				{
					printf("\nFile search operation failed!!!!!");
				}
				else
				{
					while(fread(&b,sizeof(b),1,fp)==1)
					{
						if(strcmpi(b.title,bname)==0)
						{
							printf("\n\tBook No.     :   %d",b.bn);
							printf("\n\tTitle        :   %s",b.title);
							printf("\n\tSubject      :   %s",b.sub);
							printf("\n\tPrice        : Rs.%2f",b.price);
							printf("\n\tNo. of Books :  %d",b.nob);
							printf("\n\tAuthor       :   %s",b.author);
							printf("\n\tPublisher    :   %s",b.publisher);
							found=1;
						}
						if(found==0)
						{
							printf("\n!!!!!!!!!!");
							printf("\nThe book which you are searching is not found");
						}
						fclose(fp);
					}
					break;
				}
			case 3:
				//search on the basis of subject
				system("cls");
				fflush(stdin);
				printf("\n\nEnter the subject of the book which you want to search");
				gets(subject);
				fp=fopen("Book.dat","r");
				if(fp==NULL)
				{
					printf("\nFile search operation failed!!!!");
				}
				else
				{
					while(frea(&b,sizeof(b),1,fp)==1)
					{
						if(strcmpi(b.sub,subject)==0)
						{
							printf("\n\tBook No.  :  %d",b.bn);
							printf("\n\tTitle     :   %s",b.title);
							printf("\n\tSubject   :   %s",b.sub);
							printf("\n\tPrice     : Rs.%2f",b.price);
							printf("\n\tNo of Books : %d",b.nob);
							printf("\n\tAuthor   :   %s",b.author);
							printf("\b\tPublisher :  %s",b.publisher);
							found=1;
						}
					}
					if(found==0)
					{
						printf("\n!!!!!!!!!!");
						printf("\nThe book which you are searching is not found");
					}
					fclose(fp);
				}
				break;
			case 4:
				//code to close search window
				printf("\nPress any key to quit the search operation");
				break;
			default:
				printf("\nYou entered invalid choice for search");	
	}
	getch();
}
int checkBookNo(int bn)
{
	int repeated=0,lastbookno;
	struct book b1;
	fp=fopen("Book.dat","r");
	if(fp==NULL)
	{
		printf("\n\nRead operation failure as the file which you are searching does not exist!!!");
	}
	else
	{
		while(fread(&b1,sizeof(b1),1,fp)==1)
		{
			if(b1.bn==bn)
			{
				repeated=1;
				break;
			}
		}
		fclose(fp);
	}
	return(repeated);
}
int findLastBookNo()
{
	int lastbookno;
	struct book b2;
	fp=fopen("Book.dat","r");
	if(fp==NULL)
	{
		printf("\n\nFile open operation failure!!!");
	}
	else
	{
		while(fread(&b2,sizeof(b2),1,fp)==1)
		{
			lastbookno=b2.bn;
		}
		fclose(fp);
	}
	return(lastbookno);
}

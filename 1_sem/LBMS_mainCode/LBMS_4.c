#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<process.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

#define MAX_YR  9999
#define MIN_YR  1900

//structure to store date
typedef struct
{
    int yyyy;
    int mm;
    int dd;
} Date;


void printMessageCenter(const char* message)
{
	int len = 0;
	int pos = 0;
	
	len = (78 - strlen(message))/2;
	printf("\t\t\t");
	for(pos=0;pos<len;pos++)
	{
		printf(" ");
	}
	printf("%s",message);
}
// Function to check leap year.
//Function returns 1 if leap year
int  IsLeapYear(int year)
{
    return (((year % 4 == 0) &&
             (year % 100 != 0)) ||
            (year % 400 == 0));
}
// returns 1 if given date is valid.
int isValidDate(Date *validDate)
{
    //check range of year,month and day
    if (validDate->yyyy > MAX_YR ||
            validDate->yyyy < MIN_YR)
        return 0;
    if (validDate->mm < 1 || validDate->mm > 12)
        return 0;
    if (validDate->dd < 1 || validDate->dd > 31)
        return 0;
    //Handle feb days in leap year
    if (validDate->mm == 2)
    {
        if (IsLeapYear(validDate->yyyy))
            return (validDate->dd <= 29);
        else
            return (validDate->dd <= 28);
    }
    //handle months which has only 30 days
    if (validDate->mm == 4 || validDate->mm == 6 ||
            validDate->mm == 9 || validDate->mm == 11)
        return (validDate->dd <= 30);
    return 1;
}

void headMessage(const char *message)
{
	system("cls");
	time_t currentTime;
	time(&currentTime);
	printf("\t\t\t%s\n", ctime(&currentTime));
	printf("\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    printf("\n\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb                                                   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    printf("\n\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb    LIBRARY BOOKS MANAGEMENT SYSTEM Project in C   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    printf("\n\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb                                                   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    printf("\n\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    printMessageCenter(message);
    printf("\n\t\t\t---------------------------------------------------------------------------");
}
void welcomeMessage()
{
	system("color 90");
    headMessage("KIST COLLEGE");
    printf("\n\n\n\n\n");
    printf("\n\t\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t\t        =                   TO                      =");
    printf("\n\t\t\t\t        =              LIBRARY BOOK                 =");
    printf("\n\t\t\t\t        =               MANAGEMENT                  =");
    printf("\n\t\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\n\n\t\t\t Press any key to continue.....");
    getch();
}
//code to declear function prototype

void insertData();
void displayData(void);
void updateData(int);
void deleteData(int);
void searchData(void);
int checkBookNo(int);
int findLastBookNo(void);
void login();

//Code to declare file pointer
FILE *fp,*fp1;
//Code to design structure
struct book
{
    int bn;
    char stdName[200];
    char bookName[100];
    float price;
    int nob;
    char author[100];
    char publisher[100];
    Date bookIssueDate;
    Date bookSubmitDate;
};


//Code to declare structure variable
struct book b;
//Code to declare main function
/*############################################################ main() ######################################################################*/
main()
{
	welcomeMessage();
	system("cls");
	login();
	int choice;
    int bn;
    while(1)
    {
		system("cls");
		//Code to display menu
		headMessage("MAIN MENU");
	
		printf("\n\n\n\t\t\t1. Insert Record");
		printf("\n\t\t\t2. Display Record");
		printf("\n\t\t\t3. Update Record");
		printf("\n\t\t\t4. Delete Record");
		printf("\n\t\t\t5. Search Record");
		printf("\n\t\t\t6. Quit");
		printf("\n\n\t\t\tEnter your choice between 1 to 6 : ");
	
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
			    headMessage("UPDATE MENU");
			    printf("\n\t\t\tEnter the book no. which you want to update = ");
			    scanf("%d",&bn);
			    updateData(bn);
			    break;
		    case 4:
			    //Code to call deleteData function
			    headMessage("DELETE MENU");
			    printf("\n\t\t\tEnter the book no. which you want to delete = ");
			    scanf("%d",&bn);
			    deleteData(bn);
			    break;
		    case 5:
			    //Code to call searchData function
			    searchData();
			    break;
		    case 6:
		    	printf("\n\n\n\t\t\t\tThank you!!!\n\n\n\n\n");
			    exit(0);
		    default:
		    	headMessage("INVALID INPUT");
			    printf("\n\n\n\t\t\tSORRY!!! INVALID INPUT!!!\n");
			    printf("\t\t\tPlease, Enter the valid choice between 1 to 6");
			    getch();
		}
    }
}
//Code to declare function defination
/*############################################################ insertData() #####################################################################*/
void insertData()
{
    char next='y';
    int duplicatebookno=0,lastbookno;
    system("cls");
    while(next=='y'||next=='Y')
    {
	aa: // go to statement
	system("cls");
	headMessage("ADD NEW BOOKS");
	printf("\n\t\t\tEnter the book ID\t		= ");
	scanf("%d",&b.bn);
	//Code to call function to check the book no. has been repeated or not
	duplicatebookno=checkBookNo(b.bn);
	if(duplicatebookno==1)
	{
		printf("\n\t\t\tThe book no. which you typed just now, is already exists in the data file!!!!\n");
		printf("\n\n\t\t\tPlease, Enter the unique Book ID.!!!");
		lastbookno=findLastBookNo();
		printf("\n\n\t\t\tThe last book no. is : %d",lastbookno);
		
		getch();
		goto aa;
		}
		fflush(stdin);
		printf("\n\t\t\tEnter the Name of the Student		= ");
		gets(b.stdName);
		printf("\n\t\t\tEnter the Name of the book 		= ");
		gets(b.bookName);
		printf("\n\t\t\tEnter the price of the book		= ");
		scanf("%f",&b.price);
		printf("\n\t\t\tEnter the no. of book			= ");
		scanf("%d",&b.nob);
		fflush(stdin);
		printf("\n\t\t\tEnter the author of the book		= ");
		gets(b.author);
		printf("\n\t\t\tEnter the publisher of the book		= ");
		gets(b.publisher);
		printf("\n\t\t\tEnter Issue Date (day/month/year)	= ");
		scanf("%d/%d/%d",&b.bookIssueDate.dd,&b.bookIssueDate.mm,&b.bookIssueDate.yyyy);
		printf("\n\t\t\tEnter Submit Date (day/month/year)	= ");
		scanf("%d/%d/%d",&b.bookSubmitDate.dd,&b.bookSubmitDate.mm,&b.bookSubmitDate.yyyy);
 
		fp=fopen("Book.dat","a");
		if(fp==NULL)
		{
			printf("\n\t\t\tFile creation error has occurred!!!");
		}
		else
		{
			fwrite(&b,sizeof(b),1,fp);
			fclose(fp);
			printf("\n\n\t\t\tDo you want to insert record of another book (Y/N)?");
			next=getche();
		}
	}
}
/*############################################################ displayData() ######################################################################*/
void displayData(void)
{
	system("cls");
	headMessage("BOOKS LIST");
	fp=fopen("Book.dat","r");
	rewind(fp);
	if(fp==NULL)
	{
		printf("\n\n\t\t\tRead operation failure as the file which your are searching does not exixt!!!");
	}
	else
	{
		printf("\n\tBook ID No.  Student Name\tBook Name\t\tPrice\t\tNo. of Books\tAuthor\t\t\tPublisher\tIssue Date\t\tSubmit Date");
		while(fread(&b,sizeof(b),1,fp)==1)
		{
		//	printf("\n\t  %-8d   %s\t\t%s\t\t\tRs.%.2f\t\t%d\t%s\t\t\t%s\t\t%d/%d/%d\t%d/%d/%d",b.bn,b.stdName,b.bookName,b.price,b.nob,b.author,b.publisher,b.bookIssueDate.dd,b.bookIssueDate.mm,b.bookIssueDate.yyyy,b.bookIssueDate.dd+15,b.bookIssueDate.mm,b.bookIssueDate.yyyy);
			
			printf("\n\t  %-8d   ",b.bn);
			printf("%s\t\t",b.stdName);
			printf("%s\t\t\t",b.bookName);
			printf("Rs.%.2f\t\t",b.price);
			printf("%d\t",b.nob);
			printf("%s\t\t\t",b.author);
			printf("%s\t\t",b.publisher);
			printf("%d/%d/%d\t",b.bookIssueDate.dd,b.bookIssueDate.mm,b.bookIssueDate.yyyy);
			printf("%d/%d/%d",b.bookSubmitDate.dd,b.bookSubmitDate.mm,b.bookSubmitDate.yyyy);
			
		}
		fclose(fp);
	}
	getch();
}
/*############################################################ updateData() ######################################################################*/
void updateData(int bn)
{
	//headMessage("UPDATE MENU");
	fp=fopen("Book.dat","r");
	fp1=fopen("newBook.dat","w");
	if(fp==NULL||fp1==NULL)
	{
		printf("\n\t\t\tFile Operation failed.");
	}
	else
	{
		//code to show the existing data
		printf("\n\n\t\t\tThe followings are the existing data!!!!!");
		while(fread(&b,sizeof(b),1,fp)==1)
		{
			if(b.bn==bn)
			{
				printf("\n\t\t\tBook ID No.   :  %d",b.bn);
				printf("\n\t\t\tStudent Name  :  %s",b.stdName);
				printf("\n\t\t\tBook Name     :  %s",b.bookName);
				printf("\n\t\t\tPrice         :  Rs. %2f",b.price);
				printf("\n\t\t\tNo. of Books  :  %d",b.nob);
				printf("\n\t\t\tPublisher     :  %s",b.publisher);
				
			}
		}
		//code to enter new data
		rewind(fp);
		//headMessage("Enter the new correct data");
		printf("\n\n\t\t\tEnter the new correct data");
		while(fread(&b,sizeof(b),1,fp)==1)
		{
			if(bn==b.bn)
			{
				printf("\n\n\n\t\t\tEnter the Book ID 			= ");
				scanf("%d",&b.bn);
				fflush(stdin);
				printf("\n\t\t\tEnter the Name of the Student		= ");
				gets(b.stdName);
				printf("\n\t\t\tEnter the Name of the book		= ");
				gets(b.bookName);
				printf("\n\t\t\tEnter the price of book 		= ");
				scanf("%f",&b.price);
				printf("\n\t\t\tEnter the no. of book 			= ");
				scanf("%d",&b.nob);
				fflush(stdin);
				printf("\n\t\t\tEnter the author of the book 		= ");
				gets(b.author);
				printf("\n\t\t\tEnter the publisher of the book	 	= ");
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
		printf("\n\n\t\t\tThe record has been successfully updated in the data file");
	}
	getch();
}
/*############################################################ deleteData() ######################################################################*/
void deleteData(int bn)
{
	int found = 0;
	headMessage("DELETE MENU");
	fp=fopen("Book.dat","r");
	fp1=fopen("newBook.dat","w");
	
	if(fp==NULL||fp1==NULL)
	{
		printf("\nFile Operation failed");
	}
	else
	{
		while(fread(&b,sizeof(b),1,fp))
		{
			if(bn!=b.bn)
			{
				fwrite(&b,sizeof(b),1,fp1);
				//continue;
			}
			else
			{	
				found = 1;	
			}
		}
		fclose(fp);
		fclose(fp1);
		remove("Book.dat");
		rename("newBook.dat","Book.dat");
		(found)? printf("\n\t\t\tRecord deleted successfully....."):printf("\n\t\t\tRecord not found");
		//printf("\n\n\t\t\tThe record has been successfully deleted from the date file.");
	}
	getch();
}
/*############################################################ searchData() ######################################################################*/
void searchData(void)
{
	int bn,found=0;
	char bname[100],subject[100];
	unsigned int countBook = 1;
	int ch;
	system("cls");
	headMessage("SEARCH MENU");
	printf("\n\t\t\t1. Search by Book No.");
	printf("\n\t\t\t2. Search by Student Name");
	printf("\n\t\t\t3. Search by Book Name");
	printf("\n\t\t\t4. Quit Search");
	printf("\n\n\t\t\tEnter your choice for search => ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			//search on the basis of book no.
			system("cls");
			headMessage("SEARCH BY BOOK ID ");
			printf("\n\n\t\t\tEnter the book id no. which you want to search : ");
			scanf("%d",&bn);
			fp=fopen("Book.dat","r");
			if(fp==NULL)
			{
				printf("\n\t\t\tFile seach operation failed!!!!!");
			}
			else
			{
				while(fread(&b,sizeof(b),1,fp)==1)
				{
					if(b.bn==bn)
					{
						headMessage("RECORD");
						printf("\n\t\t\tBook ID No   : %d",b.bn);
						printf("\n\t\t\tStudent Name : %s",b.stdName);
						printf("\n\t\t\tBook Name    : %s",b.bookName);
						printf("\n\t\t\tPrice        : Rs. %2f",b.price);
						printf("\n\t\t\tNo. of Books : %d",b.nob);
						printf("\n\t\t\tAuthor       : %s",b.author);
						printf("\n\t\t\tPublisher    : %s",b.publisher);
						printf("\n\t\t\tBook Issue Date(day/month/year)  :  (%d/%d/%d)\n",b.bookIssueDate.dd,b.bookIssueDate.mm, b.bookIssueDate.yyyy);
						printf("\t\t\tBook Submit Date(day/month/year)   :  (%d/%d/%d)\n",b.bookSubmitDate.dd,b.bookSubmitDate.mm, b.bookSubmitDate.yyyy);
							
						found=1;
					}
				}
				if(found==0)
				{
					headMessage("WARNING!!!");
					printf("\n\t\t\t!!!!!!!!!!!!!!!!!");
					printf("\n\t\t\tThe book which you are searching is not found");
				}
				fclose(fp);
			}
			break;
			case 2:
				//seach on the basis of Student Name
				system("cls");
				fflush(stdin);
				headMessage("SEARCH BY STUDENT NAME ");
				printf("\n\n\t\t\tEnter the Name of the Student which you want to search = ");
				gets(bname);
				fp=fopen("Book.dat","r");
				if(fp==NULL)
				{
					printf("\n\t\t\tFile search operation failed!!!!!");
				}
				else
				{
					while(fread(&b,sizeof(b),1,fp)==1)
					{
						if(strcmpi(b.stdName,bname)==0)
						{
							printf("\n\t\t\tBook Count = %d\n",countBook);
							printf("\n\t\t\tBook ID No.  :  %d",b.bn);
							printf("\n\t\t\tBook Name    :  %s",b.bookName);
							printf("\n\t\t\tStudent Name :  %s",b.stdName);
							printf("\n\t\t\tPrice        :  Rs.%2f",b.price);
							printf("\n\t\t\tNo. of Books :  %d",b.nob);
							printf("\n\t\t\tAuthor       :  %s",b.author);
							printf("\n\t\t\tPublisher    :  %s",b.publisher);
							printf("\n\t\t\tBook Issue Date(day/month/year)  :  (%d/%d/%d)\n",b.bookIssueDate.dd,b.bookIssueDate.mm, b.bookIssueDate.yyyy);
							printf("\t\t\tBook Submit Date(day/month/year)    :  (%d/%d/%d)\n",b.bookSubmitDate.dd,b.bookSubmitDate.mm, b.bookSubmitDate.yyyy);
							++countBook;
							found=1;
						}
						if(found==0)
						{
							printf("\n\t\t\t!!!!!!!!!!");
							printf("\n\t\t\tThe book which you are searching is not found");
						}
						fclose(fp);
					}
					break;
				}
			case 3:
				//search on the basis of Book Name
				system("cls");
				headMessage("SEARCH BY NAME OF THE BOOK ");
				fflush(stdin);
				printf("\n\n\t\t\tEnter the Name of the book which you want to search = ");
				gets(subject);
				fp=fopen("Book.dat","r");
				if(fp==NULL)
				{
					printf("\n\t\t\tFile search operation failed!!!!");
				}
				else
				{
					while(fread(&b,sizeof(b),1,fp)==1)
					{
						if(strcmpi(b.bookName,subject)==0)
						{
							printf("\n\t\t\tBook Count = %d\n",countBook);
							printf("\n\t\t\tBook ID No.  :  %d",b.bn);
							printf("\n\t\t\tStudent Name :  %s",b.stdName);
							printf("\n\t\t\tBook Name    :  %s",b.bookName);
							printf("\n\t\t\tPrice        :  Rs.%2f",b.price);
							printf("\n\t\t\tNo of Books  :  %d",b.nob);
							printf("\n\t\t\tAuthor       :  %s",b.author);
							printf("\n\t\t\tPublisher    :  %s\n",b.publisher);
							++countBook;
							found=1;
						}
					}
					if(found==0)
					{
						printf("\n\t\t\t!!!!!!!!!!");
						printf("\n\t\t\tThe book which you are searching is not found");
					}
					fclose(fp);
				}
				break;
			case 4:
				//code to close search window
				printf("\n\t\t\tPress any key to quit the search operation");
				break;
			default:
				printf("\n\t\t\tYou entered invalid choice for search");	
	}
	getch();
}
/*############################################################ checkBookNo() ######################################################################*/

int checkBookNo(int bn)
{
	int repeated=0,lastbookno;
	struct book b1;
	fp=fopen("Book.dat","r");
	if(fp==NULL)
	{
		printf("\n\n\t\t\tRead operation failure as the file which you are searching does not exist!!!");
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
/*############################################################ findLastBookNo() ######################################################################*/
int findLastBookNo()
{
	int lastbookno;
	struct book b2;
	fp=fopen("Book.dat","r");
	if(fp==NULL)
	{
		printf("\n\n\t\t\tFile open operation failure!!!");
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
/*############################################################ Login menu() ######################################################################*/
void login()
{
	int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
	{
		headMessage("Login");
	    printf("\n\n\t\t\tUsername: ");
		scanf("%s", &uname); 
		printf("\n\t\t\tPassword: ");
		while(i<10)
		{
		    pword[i]=getch();
		    c=pword[i];
		    if(c==13) break;
		    else printf("*");
		    i++;
		}
		pword[i]='\0';
		i=0; 
		if(strcmp(uname,"kist")==0 && strcmp(pword,"kist")==0)
		{
			printf("\n\n\n\t\t\tLOGIN IS SUCCESSFUL");
			printf("\n\n\n\t\t\tPress any key to continue...");
			getch();
			break;
		}
		else
		{
			printf("\n\n\n\t\t\tLogin Failed! Enter Again Username & Password");
			a++;
			getch();
			system("cls");
		}
	}
	while(a<=2);
	if (a>2)
	{
		headMessage("Login Failed");
		printf("\n\t\t\tYou have attempted to Login with wrong password too many times.");
		getch();
		exit(0);
			
	}
	system("cls");	
}


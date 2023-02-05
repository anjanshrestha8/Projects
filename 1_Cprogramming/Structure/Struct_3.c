/*1.	Write a program with structure “Students” to contain name, faculty, email,
         and total marks obtained. Develop a program to read data for 5 students 
        and display the overall detail of students rank wise with respect to total
        marks.
*/
#include<stdio.h>f
struct students{
        char name[20];
        char fact[10];
        char email[30];
        int marks;
}s[5],temp;
int main()
{
        int i=0,j=0;
       for(i=0;i<=4;i++){
        printf("Enter the details of %d students.\n",i+1);
        printf("Enter the name of the students.\n");
        fgets(s[i].name,20,stdin);
        fflush(stdin);
        
        printf("Enter the faculty of the students.\n");
        fgets(s[i].fact,20,stdin);
        fflush(stdin);
        
        printf("Enter the email of the students.\n");
        fgets(s[i].email,20,stdin);
        fflush(stdin);
       
        printf("Enter the marks of the students.\n");
        scanf("%d",&s[i].marks);
        fflush(stdin);
       }
       for(i=0;i<=4;i++){
               for(j=0;j<=4;j++){
                       if(s[j].marks<s[j+1].marks)
                       {
                               temp=s[j];
                               s[j]=s[j+1];
                               s[j+1]=temp;
                       }
               }
       }
       printf("The details of the students are as follow:\n");
       printf("Name:-\tFaculty:-\tEmail ID:-\t\tMarks:-\n");
       for(i=0;i<=4;i++){
               printf("%s\t%s\t%s\t\t%d\n",s[i].name,s[i].fact,s[i].email,s[i].marks);
       }

}
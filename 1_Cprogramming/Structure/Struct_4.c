/*    WAP using structure to input records of 5 students.
      Members include name, roll number, and marks obtained 
      in math, C programming and English. Display the records
      of students who have passed in C programming.
*/
#include<stdio.h>
struct student{
    char name[20];
    int roll;
    int math;
    int c;
    int eng;
}s[5];
int main(){
    int i=0;
    for(i=0;i<5;i++){
        printf("Enter the details of the %d student:\n",i+1);
        printf("Enter the name of the student:\n");
        fgets(s[i].name,20,stdin);
        fflush(stdin);
        printf("Enter the roll number of the student:\n");
        scanf("%d",&s[i].roll);
        fflush(stdin);
        printf("Enter the marks obtain in Math by student:\n");
        scanf("%d",&s[i].math);
        fflush(stdin);
        printf("Enter the marks obtain in C Programming by student:\n");
        scanf("%d",&s[i].c);
        fflush(stdin); 
        printf("Enter the marks obtain in English by student:\n");
        scanf("%d",&s[i].eng);
        fflush(stdin);
    }
        for(i=0;i<5;i++){
            if(s[i].c>50){
            printf("The details of student who pass the c programming are:\n");
            printf("Name:%s\n",s[i].name);
            printf("Roll no:%d\n",s[i].roll);
            printf("Marks obtain in C Programming:%d\n",s[i].c);

        }
        
    }
    return 0;
}

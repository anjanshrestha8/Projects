/*Write a program, using structure to input records of 100  students  and  display 
   therecord  of  student  with  the  highest  marks.  The  structure  members 
   include: student's name, roll, and percentage marks.*/
#include<stdio.h>
struct stud{
    char name[25];
    int id;
    float per;
}s[5],temp;
int main(){
    int i=0,j=0;
    for(i=0;i<=4;i++){
        printf("Enter the details of %d students.\n",i+1);
        printf("Enter the name of the students.\n");
        fgets(s[i].name,20,stdin);
        fflush(stdin);
        printf("Enter the rollno the students.\n");
        scanf("%d",&s[i].id);
        fflush(stdin);
        printf("Enter the percentage the students.\n");
        scanf("%f",&s[i].per);
        fflush(stdin);
    }
    for(i=0;i<=4;i++){
        for(j=i+1;j<=4;j++){
            if(s[i].per<s[j].per){
            temp=s[j];
            s[j]=s[i];
            s[i]=temp;
        }
        }
    }
    printf("The highest mark of the student is :");
    printf("Name:%s",s[0].name);
    printf("Roll NO:%d",s[0].id);
    printf("Percentage:%f",s[0].per);
}
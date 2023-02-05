/*Write a program, using structure to input records of 100  students  and  display 
   therecord  of  student  with  the  highest  marks.  The  structure  members 
   include: student's name, roll, and percentage marks.*/
#include<stdio.h>
#include<string.h>
struct stud{
    char name[25];
    int id;
    float per;
}s[5],temp;
int main(){
    int i=0,j=0;
    FILE *p;
    p=fopen("stud.txt","w+");
    if(p==NULL){
        printf("The file doesnot exits.");
        exit(0);
    }
    else{
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
    fwrite(&s,sizeof(s),1,p);
    fclose(p);
    fread(&s,sizeof(s),1,p);
    for(i=0;i<=4;i++){
        for(j=i+1;j<=4;j++){
            if(strcmp(s[i].name,s[j].name)>0){
            temp=s[j];
            s[j]=s[i];
            s[i]=temp;
        }
        }
    }
    printf("The rankwise details of the student is :");
    for(i=0;i<5;i++){
        
    printf("Name:%s",s[i].name);
    printf("Roll NO:%d",s[i].id);
    printf("Percentage:%f",s[i].per);
}
}
}
/*
#include<stdio.h>
#include<string.h>
struct stud{
    char name[25];
    int id;
    float per;
}s[5],temp;
int main(){
    int i=0,j=0;
    FILE *p;
    p=fopen("stud.txt","w+");
    if(p==NULL){
        printf("The file doesnot exits.");
        exit(0);
    }
    else{
        fread(&s,sizeof(s),1,p);
        for(i=0;i<5;i++){
            printf("name",s[i].name);
        }
*/
#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char name[34];
};
struct student ram,hari;
int main()
{
   
    ram.id = 1;
    ram.marks = 55;
    hari.id = 2;
    hari.marks = 65;
    printf("Ram id is %d | ",ram.id);
    printf("Ram got %d marks\n",ram.marks);
    printf("Hari id is %d | ",hari.id);
    printf("Hari got %d marks\n",hari.marks);
 
    return 0;
}
/*WAP to read and count total no of vharacter used in the file.*/
#include<stdio.h>
int main(){
    int c,count;
    FILE *p;
    p=fopen("abc.txt","w+");
    if(p==NULL){
        printf("the file doesnot exitss.");
        exit(0);
    }
    while(c==fgets(p))
    {
        if(c==EOF){
            break;
        }
        count++;
    }


}
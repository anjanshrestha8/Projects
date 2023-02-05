/* Write the programm using structure to read name,Age,Adress,and Telephone number of N persons and 
   sort them in acsending order by name and display all the person's details whose age is greater 
   than 25.
  */
 #include<stdio.h>

 struct emp{
     char name[25];
     int age;
     char adress[33];
     int tele;
     int n;
 }e[2],temp;
 int main(){
    int i;
    for(i=0;i<=1;i++){
        printf("Enter the details of %d employee.",i+1);
        printf("Enter the name of the employee.\n");
        fgets(e[i].name,25,stdin);
        fflush(stdin);
        printf("Enter the age of the employee.\n");
        scanf("%d",&e[i].age);
        fflush(stdin);
        printf("Enter the adress of the employee.\n");
        fgets(e[i].adress,33,stdin);
        fflush(stdin);
        printf("Enter the phone number of the employe.\n");
        scanf("%d",&e[i].tele);
        fflush(stdin);
    }
    for(i=0;i<=1;i++){
        if(e[i].age<e[i+1].age){
            temp=e[i+1];
            e[i+1]=e[i];
            e[i]=temp;
            
        }
        printf("the name of the employee is %s\n",e[i].name);
        printf("the age is %d\n",e[i].age);
        printf("the adress is %s\n",e[i].adress);
        printf("the ph number is %d\n",e[i].tele);   
    }
    printf("The employee that has age more than 25 details are:");
    for(i=0;i<=1;i++){
        if(e[i].age>25){
        printf("the name of the employee is %s\n",e[i].name);
        printf("the age is %d\n",e[i].age);
        printf("the adress is %s\n",e[i].adress);
        printf("the ph number is %d\n",e[i].tele); 
        }
        else {
            printf("There is no employee that is greater than 25.\n");
        }
    }
    

}

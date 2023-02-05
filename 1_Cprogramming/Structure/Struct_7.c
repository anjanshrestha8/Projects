/* WAP to input 5 employee records (Emp_id, Emp_name and Emp_Salary).
   Display employee information whose name starts with ‘D’.
*/

#include<stdio.h>
struct emp
{
    char emp_name[20];
    int emp_id;
    int emp_salary;
}e[5];
int main()
{
    int i=0,j=0,x=0;
    for(i=0;i<5;i++){
        printf("* Enter the details of the %dst employee:\n",i+1);
        printf("# Enter the name of the employee:\n");
        fgets(e[i].emp_name,20,stdin);
        fflush(stdin);
        printf("# Enter the id number of the employee:\n");
        scanf("%d",&e[i].emp_id);
        fflush(stdin);
        printf("# Enter the salary of the employee:\n");
        scanf("%d",&e[i].emp_salary);
        fflush(stdin);
    }
    for(i=0;i<5;i++){
        if(e[i].emp_name[0]== 'D'){
            x=1;
            printf("Name : %s\n",e[i].emp_name);
            printf("Id : %d\n",e[i].emp_id);
            printf("Salary : %d\n",e[i].emp_salary);
        }
     }
  
    if(x!=1){
		        
        printf("\n There are no details with the information you searched");
	        
    }
    return 0;
    
}


/* WAP to input 5 employee records (Emp_id, Emp_name and Emp_Salary).
   Display 3 employee information who gets the highest salary.
*/
#include<stdio.h>
    struct emp{
        int emp_id;
        char emp_name[20];
        int emp_salary;
    }e[5];

int main()
{
    int i=0,j=0,t=0,a=0;
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
    for(i=0;i<5;i++) 
	{
		for(j=i+1;j<5;j++) 
		{
			if(e[i].emp_salary<e[j].emp_salary)  
			{
				t=e[i].;
				e[i]=e[j];
				e[j]=t;	
			}
		}
    }
    return 0;
}
   
    
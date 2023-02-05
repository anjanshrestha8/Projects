//WAP to take 10 employees details and calculate the highest salary using class and object concept (Use firend function)
#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	
		string name;
		int id;
		int salary;
	public:
		void getdata()
		{
			cout<<"\n Enter Employee Details";
            cout<<"\n -------------------------------------------";
			cout<<"\n Enter Employee Id:";
			cin>>id;
            fflush(stdin);
			cout<<"\n Enter Employee Name:";
            getline(cin,name);
            fflush(stdin);
			cout<<"\n Enter Salary:";
            cin>>salary;
            fflush(stdin);
			
		}
		friend Employee compare(Employee obj2[]){
			int i;
			Employee temp;
			for(i=0;i<=1;i++){
				if(obj2[i].salary<obj2[i+1].salary){
					temp=obj2[i+1];
					obj2[i+1]=obj2[i];
					obj2[i]=temp;

				}
			}
			return obj2[i];
		}
		void display(){
			cout<<"The details of the student is:-"<<endl;
			cout<<"NAME:-"<<name<<endl;
			cout<<"ID:-"<<id<<endl;
			cout<<"Salary:-"<<salary<<endl;
			
		}
};
int main(){
	Employee obj[2];
	int a=0;
	int i=0;
	for(i=0;i<=1;i++){
		obj[i].getdata();
	}
	compare(obj);
	obj[0].display();

return 0;
}
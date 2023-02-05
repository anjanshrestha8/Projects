//WAP to find the largest number of two class using friend function
#include<iostream>
using namespace std;
class Y;
class X
{
	friend class Y;
	public:
		int a;
		void getData(){
			cout<<"enter the number."<<endl;
			cin>>a;
		}
};
class Y{
	public:
	int b;
	void getData(){
		cout<<"Enter the number"<<endl;
		cin>>b;
	}
	friend void compare(X obj,Y obj1);
};
	void compare(X obj,Y obj1){
		if(obj.a>obj1.b){
			cout<<"The largest number is :-"<<obj.a<<endl;
		}
		else{
			cout<<"The largest number is :-"<<obj1.b<<endl;
		}
	}
int main(){
	X obj;
	Y obj1;
	obj.getData();
	obj1.getData();
	compare(obj,obj1);
	return 0;
}
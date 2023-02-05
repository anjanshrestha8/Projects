//constructor overloading in c++
#include<iostream>
using namespace std;
class Student
{
	public:
		int rollno;
		string name;
		Student(int x)
		{
			rollno=x;
			name="none";
		}
		Student(int x,string y)
		{
			rollno=x;
			name=y;
		}	
};
int main()
{
	Student A(10);
	Student B(11,"John");
	cout<<"constructor overloading";
	return 0;
}

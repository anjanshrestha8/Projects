#include<iostream>
using namespace std;
class S{
	public:
	int roll;
	string name;
	void dataEnter(int x){
		cout<<"Enter the name"<<endl;
		cin>>name;
		cout<<"Enter the rollno"<<endl;
		cin>>roll;
	}
	/*void cpy(class S){
		cout<<"The data copies is "<<<<endl;
		
	}*/
};
int main(){
	S obj;
	obj.dataEnter(0);
	S obj1=obj;
	return 0;
	
	
}

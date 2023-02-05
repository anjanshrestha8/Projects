//WAP to calculate the area of rectangle of using defaul arguments
#include<iostream>
using namespace std;

class X{
	public:
		float getData(){
			int a,b;
			int area;
			cout<<"Enter the length and breath of the reatangle."<<endl;
			cin >>a>>b;
			area =a*b;
			return area;
		}
		
};
int main(){
	X obj1;
	int arc;
	arc=obj1.getData();
	cout <<"The area of the rectangle is:-"<<arc;
	return 0;
	
}

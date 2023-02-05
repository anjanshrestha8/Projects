#include<iostream>
using namespace std;
class X{
	public:
		int a,b,sum;
		int askValue(int x, int y){
			cout<<"Enter the number "<<endl;
			cin>>x>>y;
			sum=x+y;
			return sum;
		}
		void displayResult(int sum){
			cout<<"The sum of the number is "<<sum;
		}
		
};
int main(){
	X obj;
	obj.askValue(0,0);
	obj.displayResult(obj.sum );
	return 0;
}

//WAP to add 2 number using inline function.
#include<iostream>
using namespace std;
class X
{
    public:
        inline int result()
		{
	        int a,b;
	        cout<<"Enter the number u want to add"<<endl;
	        cin >> a>>b;
	        int sum=a+b;
	        return sum;
	    }
       
};
int main(){
    X obj1;
    int c;
    c=obj1.result();
    cout <<"The sum of the number is "<<c<<endl;
    return 0;   
}

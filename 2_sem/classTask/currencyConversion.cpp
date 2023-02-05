//WAP to convert currency 
#include<iostream>
#include<string> 
using namespace std;

class currConversion
{
	int dollar;
	static int rate;
	public:
		void setValue(int x)
	{
		dollar=x;
	}
	friend int convert(currConversion);
};
int currConversion::rate=119;
	int convert(currConversion x)
	{
		int a;
		a=x.dollar*x.rate;
		cout<<"The converted currency is = "<<a<<endl;
		return 0;
	}
main()
{
	currConversion obj1;
	int value;
	int t;
	cout<<"Enter dollar to convert = ";
	cin>>value;	
	obj1.setValue(value);
	t=convert(obj1);
	return 0;
}

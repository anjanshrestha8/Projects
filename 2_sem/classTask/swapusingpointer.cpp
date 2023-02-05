#include<iostream>
using namespace std;
void swap(int*,int*);
int main()
{
	
int a=1,b=2;
cout<<"Before swapping "<<endl;
cout<<"a="<<a<<endl;
cout<<"B="<<b<<endl;
swap(&a,&b);
cout<<"After swapping "<<endl;
cout<<"a=:"<<a<<endl;
cout<<"b="<<b<<endl;
return 0;
}
void swap(int*num1,int*num2){
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
	
}

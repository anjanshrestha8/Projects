#include<iostream>
using namespace std;
class S
{
	int a,b,sum;
	public:
	S(int x, int y)
	{
	
  		a=x;
  		b=y;
  		sum=a+b;
		cout <<"The sum is "<<sum;
	
	}
		~S();

};
int main(){
	S obj(3,4);
	//obj.add(0,0);
	return 0;
}

//copy const
#include<iostream>
using namespace std;
class New
{
	int x,y;
	public:
		New(int x1,int x2)
		{
			x=x1;
			y=x2;
		}
		New(const New &p1)
		{
			x=p1.x;
			y=p1.y;
		}
		int getx()
		{
			return x;
		}
		int gety()
		{
			return y;
		}
};
int main()
{
	New p1(10,15);
	New p2=p1;
	cout<<"p1.x= "<<p1.getx()<<" p1.y = "<<p1.gety()<<endl;
	cout<<"p2.x= "<<p2.getx()<<" p2.y = "<<p2.gety();
	return 0;
}


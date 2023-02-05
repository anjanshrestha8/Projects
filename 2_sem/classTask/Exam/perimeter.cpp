//WAP to find perimeter or a square, rectangle and circle using function overloading.
#include<iostream>
using namespace std;
class X{
    public:
        void result(int a){
            int peri=a*4;
            cout <<"The perimeter of the square is:- "<<peri<<endl;
    }
        void result(int a,int b){
            int peri =2*(a+b);
            cout <<"The perimeter of the rectangle is:- "<<peri<<endl;
    }
    	void result(float a){
    		float peri=2*3.14*a;
    		cout <<"The perimeter of the circle is:- "<<peri;
		}
    
};
int main(){
    X obj1;
    int s;
    float r;
    cout<<"Enter the side of square"<<endl;
    cin>>s;
    int l,b;
    cout <<"Enter the length and breath of the rectangle"<<endl;
    cin >>l>>b;
    cout<<"Enter the radius of the circle";
    cin>>r;
    obj1.result(l, b);
    obj1.result(s);
	obj1.result(r);
    return 0;
    
}

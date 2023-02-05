//sum of two comlex number using 2 class.
#include<iostream>
using namespace std;
class y;
class x{
    public:
        int real,img;
        friend class y;
};
class y{
    public:
        int real, img;
        friend void add();
};
void add()
{
    x obj1;
    y obj2;
    int r,s;
    cout<<"Enter the real and imaginary for first complex number."<<endl;
    cout<<"first real="<<endl;
    cin>>obj1.real;
    cout<<"first imaginary="<<endl;
    cin>>obj1.img;
    cout<<"Enter the real and imaginary for second complex number."<<endl;
    cout<<"second real="<<endl;
    cin>>obj2.real;
    cout<<"second imaginary="<<endl;
    cin>>obj2.img;
    r=obj1.real+obj2.real;
    s=obj1.img+obj2.img;
    cout<<"the sum of the two complex number is :"<<r<<"+"<<s<<"i";
    
}
int main(){
        add();
        return 0;
        
}
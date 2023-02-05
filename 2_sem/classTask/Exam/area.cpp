//wap to overload a function named func area() which calculate and return area of circle and rectangle assume appropriate number and type of argumnent and return type.
#include<iostream>
using namespace std;
class X{
    public:
        void area(int a){
           float peri=3.14*a*a;
            cout <<"The area of the circle is:- "<<peri<<endl;
    }
        void area(int a,int b){
            int peri =a*b;
            cout <<"The area of the rectangle is:- "<<peri<<endl;
    }
    
};
int main(){
    X obj1;
    int s;
    cout<<"Enter the radius of the circle"<<endl;
    cin>>s;
    int l,b;
    cout <<"Enter the length and breath of the rectangle"<<endl;
    cin >>l>>b;
    obj1.area(l, b);
    obj1.area(s); 
    return 0; 
}

#include<iostream>
using namespace std;
class x{
    int roll_no;
    public:
    void details(int a)
    {
        roll_no=a;
        cout<<"The entered number is = "<<roll_no;
    }
};
int main()
{
    x obj1;
    int value;
    cout<<"Enter the number:";
    cin>>value;
    
    obj1.details(value);

    return 0;
}
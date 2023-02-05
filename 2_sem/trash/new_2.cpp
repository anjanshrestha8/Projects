#include<iostream>
using namespace std;

class Room
{
	public:
		double length;
		double height;
		double breadth;
		
		double calculateArea()
		{
			return length*breadth;
		}
		double calculateVolume()
		{
			return length*breadth*height;
		}
		
};

main()
{
	Room room1; 
	room1.breadth;
	room1.height = 22;
	room1.length = 33;
	
	cin>>room1.breadth;
	cin>>room1.height;
	cin>>room1.length;
	
	
	
	cout<<"Area of the Room is "<<room1.calculateArea()<<endl;
	cout<<"Volume of the Room is "<<room1.calculateVolume()<<endl;
	return 0;
}

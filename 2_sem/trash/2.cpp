#include<iostream>
using namespace std;
class weight {
  int kilogram;
  int gram;
  public:
    void getdata ();
    void putdata ();
    void sum_weight (weight,weight) ;
} ;
void weight :: getdata() {
    cout<<"/nKilograms:";
    cin>>kilogram;
    cout<<"Grams:";
    cin>>gram;
}
void weight :: putdata () { 
  cout<<kilogram<<" Kgs. and"<<gram<<" gros.\n";
}
void weight :: sum_weight(weight w1,weight w2) {
  gram = w1.gram + w2.gram;
  kilogram=gram/1000;
  gram=gram%1000;
  kilogram+=w1.kilogram+w2.kilogram;
}
int main () {
 weight w1,w2 ,w3; 
   cout<<"Enter weight in kilograms and grams\n";
   cout<<"\n Enter weight #1" ;
   w1.getdata();
   cout<<" \n Enter weight #2" ;
   w2.getdata();
   w3.sum_weight(w1,w2);
   cout<<"/n Weight #1 = ";
   w1.putdata();
   cout<<"Weight #2 = ";
   w2.putdata();
   cout<<"Total Weight = ";
   w3.putdata();
   return 0;
}

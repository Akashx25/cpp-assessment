#include <iostream>
using namespace std;

class Vehicle{ 
    public:
     void vehicle(){
         cout <<"I love to drive nissangtr." << endl;
         
     }
}; 
   class Fourwheeler: public Vehicle{ 
    public:
     void fourwheeler(){
         cout <<"I love to drive sportscar." << endl;
         
     }
};
  
class Car:public Fourwheeler{ 
    public:
     void car(){
         cout <<"I love to drive cars." << endl;
         
     }
};

int main()
{
   Car mycar;
   
   mycar.car();
   mycar.fourwheeler();
   mycar.vehicle();
   
    return 0;
}
#include<iostream>
using namespace std;
class car
{
    public:
        string brand;
        int speed;
        car()
        {
            brand="Jhon";
            speed=0;
            cout<<"Default Constructor called."<<endl;
        }
        void drive()
        {
            cout<<"Driving"<<brand<<"at"<<speed<<"km/h"<<endl;
        }
};
int main()
{
    car car1;
    car1.drive();
}
#include<iostream>
using namespace std;
class car
{
    public:
        string brand;
        int speed;
        car(string b,int s)
        {
            brand=b;
            speed=s;
            cout<<"parameterised constructor called."<<endl;
        }
         void drive()
        {
            cout<<"Driving"<<brand<<"at"<<speed<<"km/h"<<endl;
        }
};
int main()
{
    car car2("honda",100);
    car2.drive();
}

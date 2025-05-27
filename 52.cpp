#include<iostream>
using namespace std;
class Distance
{
    public:
        int meter;
        Distance(int m=0)
        {
            meter=m;
        }
        Distance operator+(const Distance &d)
        {
            return Distance(meter+d.meter);
        }
        void display()
        {
            cout<<"distance:"<<meter<<"meter"<<endl;
        }
};
int main()
{
    Distance d1(10),d2(15);
    Distance d3=d1+d2;
    d3.display();
    return 0;
}
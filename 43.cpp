#include<iostream>
using namespace std;
class school
{
    public:
        void start()
        {
            cout<<"school starts at 9:00 am"<<endl;
        }
};
class student : public school
{
    public:
        void arive()
        {
            cout<<"student arive at 8:50 am"<<endl;
        }
};
int main()
{
    student s1;
    s1.start();
    s1.arive();
    return 0;
}


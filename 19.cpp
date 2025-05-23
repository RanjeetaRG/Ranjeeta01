#include<iostream>
using namespace std;
class sample
{
    int *data;
    public:
        sample()
        {
            data=new int;
            *data=10;
            cout<<"constructor:memory allocater"<<endl;
        }
        ~sample()
        {
            delete data;
            cout<<"Destructor:memory released"<<endl;
        }
};
int main()
{
    sample s1;
    return 0;
}
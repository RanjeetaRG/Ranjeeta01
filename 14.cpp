#include<iostream>
using namespace std;
class Student
{
    public:
        Student()
        {
            cout<<"default constructor called!"<<endl;
        }
        
};
int main()
{
    Student s1;
    return 0;
}

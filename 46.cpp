#include<iostream>
using namespace std;
class person
{
    public:
        void introduce()
        {
            cout<<"i am a person"<<endl;
        }
};
class student : public person
{
    public:
        void study()
        {
            cout<<"studing"<<endl;
        }
};
class employee : public person
{
    public:
        void work()
        {
            cout<<"working"<<endl;
        }
};
class workingstudent:public student,public employee
{
    public:
        void manage()
        {
            cout<<"managing both work and studied"<<endl;
        }
};
int main()
{
    workingstudent w;
    w.student::introduce();
    w.employee::introduce();
    w.study();
    w.work();
    w.manage();
    return 0;
}
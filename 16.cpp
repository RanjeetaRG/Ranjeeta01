#include<iostream>
using namespace std;
class student
{
    public:
        string name;
        int age;
        student(string n, int a)
        {
            name=n;
            age=a;
        }
        student(const student &s)
        {
            name=s.name;
            age=s.age;
        }
        void display()
        {
            cout<<"Name:"<<name<<",Age:"<<age<<endl;
        }
};
int main()
{
    student s1("Ranjeeta",15);
    student s2("Rahul",18);
    student s3=s1;
    student s4=s2;
    s3.display();
    s4.display();
    return 0;

}


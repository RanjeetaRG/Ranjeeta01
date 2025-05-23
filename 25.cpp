#include<iostream>
using namespace std;
class student
{
    public:
        string name;
        int marks;
        student(string n, int a)
        {
            name=n;
            marks=a;
        }
        student(const student &s)
        {
            name=s.name;
            marks=s.marks;
        }
        void display()
        {
            cout<<"Name:"<<name<<",Marks:"<<marks<<endl;
        }
};
int main()
{
    student s1("Ranjeeta",95);
    student s2=s1;
    s2.display();
    return 0;

}


#include<iostream>
using namespace std;
class Student
{
    public:
        string name,clg;
        int age,usn;
        Student(string n,int a,string c,int b)
        {
            name=n;
            age=a;
            clg=c;
            usn=b;
            cout<<"Name:"<<name<<"Age:"<<age<<"College:"<<clg<<"USN:"<<usn<<endl;
        }
};
int main()
{
    Student s1("Ranjeeta",18,"CEC",63);
    Student s2("Shubha",18,"CEC",80);
    return 0;
}
#include<iostream>
using namespace std;
class person
{
    protected:
        string name;
        int age;
        string disease;
        int billamt;
    public:
        void setperson(string b,int a,string c,int d)
        {
            name=b;
            age=a;
            disease=c;
            billamt=d;
        }
};
class doctor:public person
{
    public: 
        void showdetails()
        {
            cout<<"patient name:"<<name<<endl;
            cout<<"patient age:"<<age<<endl;
            cout<<"disease:"<<disease<<endl;
            cout<<"bill amount:"<<billamt<<endl;
            cout<<"reviewing patient's condition:"<<disease<<endl; 
        }
};
int main()
{
    doctor dr;
    dr.setperson("jhon",20,"pneumonia",3200);
    dr.showdetails();
     return 0;
}
#include<iostream>
using namespace std;
class student
{
    public:
        int *marks;
        int size;
        student(int a)
        {
            size=a;
            marks=new int[size];
        }
        student(const student &a)
        {
            size=a.size;
            marks=new int[size];
            for(int i=0;i<size;i++)
            {
                marks[i]=a.marks[i];
            }
        }
        ~student()
        {
            delete[]marks;
        }
        void display()
        {
            for(int i=0;i<size;i++)
            {
                cout<<marks[i]<<" ";
            }
            cout<<endl;
        }
};
int main()
{
    student s1(3);
    s1.marks[0]=80;
    s1.marks[1]=90;
    s1.marks[3]=100;
    student s2=s1;
    s2.display();
    return 0;
}



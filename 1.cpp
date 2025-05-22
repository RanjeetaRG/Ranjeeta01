#include<iostream>
using namespace std;
class Book
{
public:
    string title;
    string author;
    void display()
    {
        cout<<title<<"-"<<author<<endl;
    }
};
int main()
{
    Book b1;
    b1.author="Alice";
    b1.title="c++";
    b1.display();
    return 0;

}
#include<iostream>
using namespace std;
class user
{
    public:
        string name,email;
        void login()
        {
             cout<<name<<"logged with email"<<email<<endl;
        }
};
class coustmer : public user
{
    public:
        void browseproduct()
        {
            cout<<name<<"has browsing product"<<endl;
        }
};
int main()
{
    coustmer c;
    c.name="jhon";
    c.email="jhon@gmail.com";
    c.login();
    c.browseproduct();
    return 0;

}
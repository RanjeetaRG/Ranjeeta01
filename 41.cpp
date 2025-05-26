#include<iostream>
using namespace std;
class user
{
    public:
        string adminname,adminemail,sellername,coustmername;
        void login()
        {
             cout<<adminname <<" logged with email his "<< adminemail<<endl;
        }
};
class coustmer : public user
{
    public:
        void browseproduct()
        {
            cout<<sellername <<" has selling this product to "<< coustmername<<endl;
        }
};
int main()
{
    coustmer c;
    c.adminname="jhon";
    c.adminemail="jhon@gmail.com";
    c.sellername="Alice";
    c.coustmername="Raju";
    c.login();
    c.browseproduct();
    return 0;

}
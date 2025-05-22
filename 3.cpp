#include<iostream>
using namespace std;
class car{
    public:
        string brand;
        void start(){
            cout<<brand<<"car started"<<endl;
        }
        void stop(){
            cout<<brand<<"car stopped"<<endl;
        }
};
int main(){
    car c1,c2;
    c1.brand="Toyota";
    c1.start();
    c2.brand="BMW";
    c2.stop();
    return 0;
}
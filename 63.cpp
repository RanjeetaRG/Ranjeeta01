#include<iostream>
using namespace std;
class car
{
    public:
        string model;
        car(string model)
        {
            this->model=model;
        }
        void show()
        {
            cout<<"car model:"<<this->model<<endl;
        }
};
int main()
{
    car c("Toyota");
    c.show();
    return 0;
}
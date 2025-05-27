#include<iostream>
using namespace std;
class item
{
    private:
    int quantity;
    float price;
    public:
        item(int q=0,float p=0.0f):quantity(q),price(p){}
        item  operator+(const item &other)
        {
            return (quantity+other.quantity,price+other.price);
        }
        bool operator==(const item &other)
        {
            return ( quantity==other.quantity && price == other.price);
        }
        friend ostream &operator<<(ostream &os, const item &item)
        {
            os<<"item -> quantity:"<<item.quantity<<",price:$"<<item.price;
            return os;
        }
};
int main()
{
    item item1(10,250.50);
    item item2(5,100.25);
    item item3(10,250.50);
    item total=item1+item2;
    cout<<total<<endl;
    if(item1==item3)
    {
        cout<<"item1 and item3 are same in quantity and price"<<endl;
    }
    else
    {
        cout<<"item1 and item3 are different"<<endl;
    }
    return 0;
}
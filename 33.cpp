#include<iostream>
using namespace std;
class product
{
    private:
        int quality;
        float priceperitem;
    public:
        void setproduct(int q, float price)
        {
            if(q>0 && price>0)
            {
                quality=q;
                priceperitem=price;
            }
            else
            {
                cout<<"invalid quality or price!"<<endl;
            }
        }
        float gettotalprice()
        {
            return quality*priceperitem;
        }
        int getquality()
        {
            return quality;
        }
        float getunitprice()
        {
            return priceperitem;
        }
};
int main()
{
    product items;
    items.setproduct(3,499.99);
    cout<<"item brought:"<<items.getquality()<<endl;
    cout<<"price per item $:"<<items.getunitprice()<<endl;
    cout<<"total cost $:"<<items.gettotalprice()<<endl; 
    return 0;
}
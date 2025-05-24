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
            float effectiveprice=priceperitem;
             if(priceperitem>2000)
            {
                effectiveprice-=500;
            }
            
            return quality*effectiveprice;
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
    product item1;
    product item2;
    product item3;
    item1.setproduct(1,500);
    item2.setproduct(2,2500);
    item3.setproduct(3,6500);
    cout<<"item brought:"<<item1.getquality()<<endl;
    cout<<"price per item $:"<<item1.getunitprice()<<endl;
    cout<<"total cost $:"<<item1.gettotalprice()<<endl; 
    cout<<"item brought:"<<item2.getquality()<<endl;
    cout<<"price per item $:"<<item2.getunitprice()<<endl;
    cout<<"total cost $:"<<item2.gettotalprice()<<endl; 
    cout<<"item brought:"<<item3.getquality()<<endl;
    cout<<"price per item $:"<<item3.getunitprice()<<endl;
    cout<<"total cost $:"<<item3.gettotalprice()<<endl; 
    return 0;
}
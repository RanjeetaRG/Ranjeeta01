#include<iostream>
using namespace std;
class invoice
{
    public:
        void genetrateinvoice(int productId)
        {
            cout<<"generating invoice for product id:"<<productId<<endl;
            cout<<"default quantity:1 | no discount applied"<<endl;
        }
        void generateinvoice(int productId,int quantity)
        {
            cout<<"generating invoice for product id:"<<productId<<endl;
            cout<<"quantity:"<<quantity<<"| no discount applied"<<endl;
        }
        void generateinvoice(int productId,int quantity,float discount)
        {
            cout<<"generate invoice for product id:"<<productId<<endl;
            cout<<"quantity:"<<quantity<<"| discount:"<<discount<<"%"<<endl;
        }
};
int main()
{
    invoice inv;
    inv.genetrateinvoice(101);
    inv.generateinvoice(102,3);
    inv.generateinvoice(103,5,10.5);
    return 0;
}
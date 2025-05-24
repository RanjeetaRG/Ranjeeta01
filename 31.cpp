#include<iostream>
using namespace std;
class ATM
{
    private:
        int pin=123;
        double balance=5000;
      
        bool verifypin(int enteredpin)
        {
            return enteredpin=pin;
        }
        
        public:
            void withdrawcash(int enteredpin,double amount)
            {
                if(verifypin(enteredpin))
                {
                   
                        if(amount<=balance)
                        {
                            balance-=amount;
                            cout<<"withdrawal sucessful. Remaining balance:"<<balance<<endl;
                        }
                        else{
                            cout<<"Insufficient balance."<<endl;
                        }
                }
            
                else{
                    cout<<"Invalid pin."<<endl;
                }
            }    
            void checkbalance(int enteredpin)
            {
                if(verifypin(enteredpin))
                {
                    cout<<"Your balance is:"<<balance<<endl;
                }
                else{
                    cout<<"Invalid pin!"<<endl;
                }
            }
};
int main()
{
    ATM myatm;
    myatm.withdrawcash(123,1000);
    myatm.checkbalance(123);
    myatm.withdrawcash(251,5000);
    return 0;

}
#include<iostream>
#include<string>
using namespace std;
class booking
{
    public:
    string customername;
    int seats;
    booking(string name="", int s=1):customername(name),seats(s){}
    virtual void bookingticket()=0;
    virtual~booking(){}
};
class flightbooking : public booking {
public:
    flightbooking(string name,int s):booking(name,s){}
    void bookingticket() override {
        cout << "Flight ticket booked for  " << customername 
             << "with"<<seats<<"seat(s)." << endl;
    }
};
class trainbooking : public booking {
public:
    trainbooking(string name,int s):booking(name,s){}
    void bookingticket() override {
        cout << "Train ticket booked for"<<customername
             << "with"<<seats<<"seat(s)." << endl;
    }
};
class busbooking : public booking {
public:
    busbooking(string name,int s):booking(name,s){}
    void bookingticket() override {
        cout << "Bus ticket booked for"<<customername
             << "with"<<seats<<"seat(s)." << endl;
       
    }
};
class bookingmanager
{
    public:
    void confirmbooking(string name)
    {
        cout<<"booking confirmed for:"<<name<<endl;
    }
    void confirmbooking(string name,int seats)
    {
        cout<<"booking confirmed for:"<<name<<"with"<<seats<<"seat(s)."<<endl;
    }
    void confirmbooking(string name,int seats,string date)
    {
        cout<<"booking confirmed for:"<<name
            <<"|seats:"<<seats
            <<"|date:"<<date<<endl;
    }
};    
class groupbooking
{
         public:
            int totalseats;
            groupbooking(int seats=0):totalseats(seats){}
            groupbooking operator+(const groupbooking &other)
            {
                return groupbooking(this->totalseats + other.totalseats);
            }
            void display()
            {
                cout<<"total group seats booked:"<<totalseats<<endl;
            }
};
int main()
{
    booking *booking1=new flightbooking("alice",2);
    booking *booking2=new trainbooking("bob",3);
    booking *booking3=new busbooking("charlie",1);
    cout<<"===Run time polymorphism==="<<endl;
    booking1->bookingticket();
    booking2->bookingticket();
    booking3->bookingticket();
    cout<<"\n===Function overloading==="<<endl;
    bookingmanager manager;
    manager.confirmbooking("david");
    manager.confirmbooking("emma",4);
    manager.confirmbooking("frank",5,"2025-06-01");
    cout<<"\n===operator overloading==="<<endl;
    groupbooking group1(4);
    groupbooking group2(6);
    groupbooking totalgroup=group1+group2;
    totalgroup.display();
    delete booking1;
    delete booking2;
    delete booking3;
    return 0;

}  



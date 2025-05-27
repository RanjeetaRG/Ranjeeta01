#include<iostream>
#include<string>
using namespace std;
class Fir
{
    public:
    string complainantname;
    Fir(string name):complainantname(name){}
    virtual void registercase()=0;
    virtual~Fir(){}
};
class Theftcase : public Fir {
public:
    Theftcase(string name):Fir(name){}
    void registercase() override {
        cout << "Theft FIR registered for " << complainantname << "." << endl;
        cout << "Action: Ambulance dispatched and accident site team notified." << endl;
    }
};
class Accidentcase : public Fir {
public:
    Accidentcase(string name):Fir(name){}
    void registercase() override {
        cout << "Accident FIR registered for " << complainantname << "." << endl;
        cout << "Action: Ambulance dispatched and accident site team notified." << endl;
    }
};
class Missingpersoncase : public Fir {
public:
    Missingpersoncase(string name):Fir(name){}
    void registercase() override {
        cout << "Missing person FIR registered for " << complainantname << "." << endl;
        cout << "Action: Local patrol units altered and investigation initiated." << endl;
    }
};
int main()
{
    Fir*case1=new Theftcase("Ravi");
    Fir*case2=new Accidentcase("Sita");
    Fir*case3=new Missingpersoncase("Karna");
    cout<<"===FIR Registration==="<<endl;
    case1->registercase();
    cout<<endl;
    case2->registercase();
    cout<<endl;
    case3->registercase();
    cout<<endl;
    delete case1;
    delete case2;
    delete case3;
    return 0;
}


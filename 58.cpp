#include<iostream>
#include<string>
using namespace std;
class Medical
{
    public:
    string patientname;
    Medical(string name):patientname(name){}
    virtual void patientreport()=0;
    virtual~Medical(){}
};
class patientcondition : public Medical {
public:
    patientcondition(string name):Medical(name){}
    void patientreport() override {
        cout << "patient situation of  " << patientname << "." << endl;
        cout << "Action: need to see condition." << endl;
    }
};
class Accidentreport : public Medical {
public:
    Accidentreport(string name):Medical(name){}
    void patientreport() override {
        cout << "Accident report registered for " << patientname << "." << endl;
        cout << "Action: patient is in serious condition." << endl;
    }
};
class Deathreport : public Medical {
public:
    Deathreport(string name):Medical(name){}
    void patientreport() override {
        cout << "Death report registered for " << patientname << "." << endl;
        cout << "Action: patient death due to accident." << endl;
    }
};
int main()
{
    Medical*case1=new patientcondition("Ravi");
    Medical*case2=new Accidentreport("Ravi");
    Medical*case3=new Deathreport("Ravi");
    cout<<"===patient overall report==="<<endl;
    case1->patientreport();
    cout<<endl;
    case2->patientreport();
    cout<<endl;
    case3->patientreport();
    cout<<endl;
    delete case1;
    delete case2;
    delete case3;
    return 0;
}


#include<iostream>
using namespace std;
class Teacher
{
    public:
        string tname;
        string tdob;
        string tempid;
        string tdept;
        float texp;
        float tsalary;
        Teacher()
        {
            tempid="un defined";
            tdept="un Assigned";
            texp=0;
        }
        Teacher(string s_tname,string s_tdob,float s_tsalary)
        {
            tname=s_tname;
            tdob=s_tdob;
            tsalary=s_tsalary;
        }
        Teacher(string s_tname,string s_tdob,float s_tsalary,string s_tempid,string s_tdept,float s_texp)
        {
            tname=s_tname;
            tdob=s_tdob;
            tsalary=s_tsalary;
            tempid=s_tempid;
            tdept=s_tdept;
            texp=s_texp;
        }
        Teacher(const Teacher &cy_tch)
        {
            tname=cy_tch.tname;
            tdob=cy_tch.tdob;
            tsalary=cy_tch.tsalary;
            tempid=cy_tch.tempid;
            tdept=cy_tch.tdept;
            texp=cy_tch.texp;
        }
        void getTeacherDetails()
        {
            
        }
        void setsalary(float s_salary)
        {
            tsalary=s_salary;
        }
        float getsalary()
        {
            return tsalary;
        } 
};
int main()
{
    Teacher t1("Teacher 1","12-05-1990",15000,"CECTH001","CSE",5);
    Teacher t3("Teacher 3","12-05-1990",30000.50,"CECTH003","CSE",2);
    Teacher t4("Teacher 4","12-05-1990",14999,"CECTH004","CSE",7);
    Teacher t5("Teacher 15","12-05-1990",25000.50,"CECTH005","CSE",2);
    Teacher t2=t1;
    cout<<"\n-----Before Salary Update:Teacher Details-----"<<endl;
    cout<<"|Name|DOB|Department|Employee ID|Experience|Salary|"<<endl;
    t1.getTeacherDetails();
    t2.getTeacherDetails();
    t3.getTeacherDetails();
    t4.getTeacherDetails();
    t5.getTeacherDetails();
    cout<<"T1 Salary="<<t1.getsalary()<<endl;
    cout<<"T2 Salary="<<t2.getsalary()<<endl;
    cout<<"T3 Salary="<<t3.getsalary()<<endl;
    cout<<"T4 Salary="<<t4.getsalary()<<endl;
    cout<<"T5 Salary="<<t5.getsalary()<<endl;
    if(t1.getsalary()<=15000){
        t1.setsalary(t1.getsalary()*2);
    }else{
        t1.setsalary(t1.getsalary()-5000);
    }
    if(t2.getsalary()<=15000){
        t2.setsalary(t2.getsalary()*2);
    }else{
        t2.setsalary(t2.getsalary()-5000);
    }
    if(t3.getsalary()<=15000){
        t3.setsalary(t3.getsalary()*2);
    }else{
        t3.setsalary(t3.getsalary()-5000);
    }
    if(t4.getsalary()<=15000){
        t4.setsalary(t4.getsalary()*2);
    }else{
        t4.setsalary(t4.getsalary()-5000);
    }
    if(t5.getsalary()<=15000){
        t5.setsalary(t5.getsalary()*2);
    }else{
        t5.setsalary(t5.getsalary()-5000);
    }
    cout<<"\n\n-----After Salary Up[date:Teacher Details-----"<<endl;
    cout<<"T1salary="<<t1.getsalary()<<endl;
    cout<<"T2salary="<<t2.getsalary()<<endl;
    cout<<"T3salary="<<t3.getsalary()<<endl;
    cout<<"T4salary="<<t4.getsalary()<<endl;
    cout<<"T5salary="<<t5.getsalary()<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of students:";
    cin>>n;
    string *name=new string[n];
    cout<<"Enter student name:\n";
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<".";
        cin>>name[i];
    }
    string key;
    cout<<"Enter the name to search:";
    cin>>key;
    bool found=false;
    cout<<"Found at position:";
    for(int i=0;i<n;i++)
    {
        if(name[i]==key)
        {
            cout<<i+1<<" "<<endl;
            found=true;
            
        }
        
    }
    if(!found)
    {
        cout<<"\nstudent not found in the list.";
    }
    cout<<endl;
    delete[] name;
    return 0;
}
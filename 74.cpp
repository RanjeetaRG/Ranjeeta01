#include<iostream>
using namespace std;
int main()
{
    int n;
    double choice;
    cout<<"Enter number of students:";
    cin>>n;
    int *rollno=new int[n];
    cout<<"Enter student rollno:\n";
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<".";
        cin>>rollno[i];
    }
    int key;
    cout<<"Enter the rollno to search:";
    cin>>key;
    bool found=false;
    do{
    for(int i=0;i<n;i++)
    {
        if(rollno[i]==key)
        {
            cout<<"student"<<key<<"found at position"<<i+1<<endl;
            found=true;
            break;
        }
        
    }
    if(!found)
    {
        cout<<"student"<<key<<"not found in the list."<<endl;
    }
    cout<<"Do you want to search another rollno(y/n):";

    cin>>choice;
    }while (choice=='y' || choice=='Y');
   
    
    delete[] rollno;
    return 0;
}
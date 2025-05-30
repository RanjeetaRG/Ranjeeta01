#include<iostream>
#include<string>
using namespace std;
void bubblesort(int ids[],string titles[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(ids[j]>ids[j+1])
            {
                swap(ids[j],ids[j+1]);
                swap(titles[j],titles[j+1]);
            }
        }
    }
}
int binarysearch(int arr[],int size,int key)
{
    int left=0,right=size-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            left=mid+1;
        else
            right=mid-1; 
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter number of books:";
    cin>>n;
    int *bookids=new int[n];
    string *titles=new string[n];
    cout<<"\nEnter book ID and Titles:\n";
    for(int i=0;i<n;i++)
    {
        cout<<"book "<<i+1<<" ID: ";
        cin>>bookids[i];
        cin.ignore();
        cout<<"Book "<<i+1<<" Titles: ";
        getline(cin,titles[i]);
    }
    bubblesort(bookids,titles,n);
    char choice;
    do
    {
        int searchid;
        cout<<"\nEnter book ID to search:";
        cin>>searchid;
        int index=binarysearch(bookids,n,searchid);
        if(index!=-1)
        {
            cout<<"book found:"<<titles[index]
                <<"(ID:"<<bookids[index]<<")"<<endl;
        }
        else
        {
            cout<<"book not found."<<endl;
        }
        cout<<"Do you want to search another? (y/n): ";
        cin>>choice;
    } while (choice=='y' || choice=='Y');
    delete[] bookids;
    delete[] titles;
    
}

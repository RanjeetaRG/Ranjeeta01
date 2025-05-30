#include<iostream>
using namespace std;
int recursivebinarysearch(int arr[],int left,int right,int key)
{
    if(left>right)
        return -1;
    int mid=(left+right)/2;
    if(arr[mid]==key)
        return mid;
    else if(arr[mid]<key)
        return recursivebinarysearch(arr,mid+1,right,key);
    else
        return recursivebinarysearch(arr,left,mid-1,key);
}
int main()
{
    int patientIds[]={2001,2005,2010,2020,2040,2070};
    int size=sizeof(patientIds)/sizeof(patientIds[0]);
    int searchId;
    cout<<"Enter patient ID to search:";
    cin>>searchId;
    int result=recursivebinarysearch(patientIds,0,size-1,searchId);
    if(result!=-1)
    {
        cout<<"patient ID found at index: "<<result<<endl;
    }
    else
    {
        cout<<"patient ID not found\n";
    }
    return 0;
}
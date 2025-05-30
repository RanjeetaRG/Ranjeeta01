#include<iostream>
#include<string>
using namespace std;
struct city
{
    string name;
    int temprature;
};
void bubblesort(city cities[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(cities[j].temprature<cities[j+1].temprature)
            {
                swap(cities[j],cities[j+1]);
                swapped=true;
            }
        }
    }
}

int main()
{
    city cities[5];
    for(int i=0;i<5-1;i++)
    {
        cout<<"\nEnter city name: ";
        getline(cin,cities[i].name);
        cout<<"Enter temperature:";
        cin>>cities[i].temprature;
        cin.ignore();
    }
    bubblesort(cities,5);
    cout<<"\nCities stored by temperature(Low to High):\n";
    for(int i=0;i<5;i++)
    {
        cout<<cities[i].name<<"-"<<cities[i].temprature<<"degree C\n";
    }
    return 0;
}
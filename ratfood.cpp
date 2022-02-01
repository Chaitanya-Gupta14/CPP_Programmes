#include<iostream>
using namespace std;

int foodcount(int r,int units, int n, int arr[])
{
    int totalfoodreq=r*units;
    int food=0;
    int house;
    for(house = 0; house<n; house++)
    {
        food+=arr[house];
        if(food>=totalfoodreq) break;
    }

    if(totalfoodreq>food) return 0;
    else return (house+1);
}
int main()
{
    int r,units,n,arr[n];
    cout<<endl<<"Enter the number of Rats: ";
    cin>>r;
    cout<<endl<<"Enter the units consumed by 1 Rat: ";
    cin>>units;
    cout<<endl<<"Enter the number of houses: ";
    cin>>n;
    for(int i = 0;i<n;i++){
    cout<<"Enter the number of units in house: "<<i<<endl;
    cin>>arr[i];
    } 
    int count = foodcount(r,units,n,arr);
    cout<<endl<<"No. of hosues the Rats has to pay a visit is: "<<count;
}
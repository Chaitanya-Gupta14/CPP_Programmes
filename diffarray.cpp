#include<iostream>
using namespace std;

//Function to find out the number of elements whose difference from num is equal or less than the required diff.
int findCount(int arr[], int length, int num, int diff)
{
    int reqdif=0,c=0;
    for(int i = 0; i<length ; i++)
    {
        reqdif = arr[i] - num;
        if(reqdif <= diff) c++;
    }
    return (c>0?c:-1);
}

int main()
{
    int length, num, diff, arr[length];
    cout<<"Enter the Number to find diff with: ";cin>>num;
    cout<<"Enter the required difference: ";cin>>diff;
    cout<<"Enter the Lenght of Array: ";cin>>length;
    for(int i = 0;i<length;i++)
    {
        cout<<"Enter the "<<(i+1)<<" element: ";
        cin>>arr[i];
    }
    cout<<"The number of elements in array is: "<<findCount(arr,length,num,diff);
}
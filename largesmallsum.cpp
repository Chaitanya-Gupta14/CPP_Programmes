#include<iostream>
using namespace std;

int largesmallsum(int size,int arr[])
{
    int sum=0,lr1=0,large=0,sm1=INT_MAX,small=INT_MAX,temp;
//sort in decreasing order of even places number then 2 indexed number will be 2nd largest
    for(int i = 0; i < size ; i+=2)
    {
        for(int v=i+2;v<size;v+=2)
        {
            if(arr[i]<arr[v])
            {
             temp = arr[i];
             arr[i]=arr[v];
             arr[v]=temp;
            } 
        }         
    }
//sort in increasing order of odd places number then 3 indexed number will be 2nd smallest
    for(int j = 1; j < size ; j+=2) 
    {
        for(int u=j+2;u<size;u+=2)
        {
            if(arr[j]>arr[u])
            {
             temp = arr[j];
             arr[j]=arr[u];
             arr[u]=temp;
            } 
        } 
            
    }
    for(int i = 0; i < size ; i++)
        {
            cout<<arr[i]<<endl;
        }

    sum = arr[2] + arr[3];
    return sum;
}
int main()
{
    int size;
    cout<<"Enter the size of array: "; 
    cin>>size;
    int arr[size];
    if(size<=3 || size == 0)
        cout<<"0";
    else{
        for(int i = 0; i < size ; i++)
        {
            cout<<"Enter the elements: "; 
            cin>>arr[i];
        }
        for(int i = 0; i < size ; i++)
        {
            cout<<arr[i]<<endl<<endl<<endl;
        }
        
        cout<<"Answer is: "<<largesmallsum(size, arr);
        }
    return 0;
}
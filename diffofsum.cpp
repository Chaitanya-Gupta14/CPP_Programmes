#include<iostream>
using namespace std;

int diffofsum(int n, int m)
{
    int div = 0, sum1 = 0, sum2 = 0;
    for(int i = 1; i <= m ; i++)
    {
        if(i%n==0)
        sum1+=i;
        else 
        sum2+=i;
    }
    int c=(sum1>sum2)?(sum1-sum2):(sum2-sum1);
    return c;
}

int main()
{
    int n,m;
    cout<<"Enter the number first number: "; cin>>n;
    cout<<"Enter the number second number: "; cin>>m;
    cout<<diffofsum(n,m);
return 0;
}
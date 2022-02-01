#include<iostream>
using namespace std;

int printAllSubstrings(char input[])
{
    int i,j,k;
    for(i=0;input[i]!='\0';i++)
    {
         for(j=i;input[j]!='\0';j++)
        {
                for(k=i;k<=j;k++)
            {
                cout<<input[k];
            }
            cout<<endl;
        }   
    }
     
    
}
int main()
{
char input[16];
cout<<"Enter the input: ";
cin>>input;
printAllSubstrings(input);
return 0;
}
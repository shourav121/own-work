#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the size of an array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the "<<i<<"number of array ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        
    }
    cout<<sum;

    return 0;
}
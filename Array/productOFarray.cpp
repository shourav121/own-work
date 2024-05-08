#include<iostream>
using namespace std;
int main()
{
    int n,product=1;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter a number ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        product=product*arr[i];
    }
    cout<<product;
    
    return 0;
}
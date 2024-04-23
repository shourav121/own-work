#include<iostream>
using namespace std;
int main()
{
    int n,search,f=0;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the element of an array ";
        cin>>arr[i];
    }
    cout<<"enter the searching element ";
    cin>>search;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            f=1;
            break;
        }

    }
    if(f==1)
    {
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}
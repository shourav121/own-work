#include<iostream>
using namespace std;
int main()
{
    int start,end,i;
    cout<<"enter starting number"<<endl;
    cin>>start;
    cout<<"enter the ending number"<<endl;
    cin>>end;
    for(i=start;i>=end;i=i-1)
    {
        cout<<i<<" ";
    }
    return 0;
}
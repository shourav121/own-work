#include<iostream>
using namespace std;
int main()
{
    int n,a,b,i;
    cout<<"enter a number ";
    cin>>n;
    a=0;
    b=1;
    for(i=0;i<=n;i=a+b)
    {
        cout<<i<<"  ";
        a=b;
        b=i;
    }
    return 0;
}
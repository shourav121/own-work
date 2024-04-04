#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
   
    int i,n;
    cout<<"entr the n"<<endl;
    cin>>n;
    for(i=100;i>100-(n*3);i=i-3)
    {
        cout<<i<<" ";
    }
    return 0;
}
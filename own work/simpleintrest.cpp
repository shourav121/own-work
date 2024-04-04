#include<iostream>
using namespace std;
int main()
{
    int principal,rate,time,simpleintrest;
    cout<<"enter amount "<<endl;
    cin>>principal;
    cout<<"enter intrest "<<endl;
    cin>>rate;
    cout<<"enter time"<<endl;
    cin>>time;
    simpleintrest=((principal*rate*time)/100);
    cout<<"your current amount is "<<simpleintrest<<endl;
    return 0;
}
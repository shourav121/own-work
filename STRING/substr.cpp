#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"enter a word ";
    cin>>str;
    cout<<str.substr(2,6);//str.substr(position,length)
        return 0;
}
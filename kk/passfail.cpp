#include<iostream>
using namespace std;
int main()
{
    int r,area,circumfrence;
    cout<<"enter the value";
    cin>>r;
    area=3.14*r*r;
    circumfrence=2*3.14*r;
    if(area<circumfrence)
    {
        cout<<"circumfrence is greater"<<endl;
    }
    else if(area>circumfrence)
    {
        cout<<"area is greater"<<endl;
    }
    else
    {
        cout<<"equal";
    }

return 0;
}
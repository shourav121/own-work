#include<iostream>
using namespace std;
int main()
{
    int r,c;
    int num=1;
    for(r=1;r<=4;r++)
    {
        for(c=1;c<=r;c++)
        {
            cout<<" "<<num;
            num++;
            
        }
        cout<<endl;
    }

    return 0;
}
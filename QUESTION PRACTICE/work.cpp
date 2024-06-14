#include<iostream>
using namespace std;
int main()
{ 
    int r,c;
    int sum;
  
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
               sum=r+c;
            if(sum%2==0)
            {
                cout<<" 1 ";
            }
            else
            {
                cout<<" 0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}
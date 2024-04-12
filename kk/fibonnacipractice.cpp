#include<iostream>
using namespace std;
int main()
{
   
   int n,x,y,z;
   cout<<"enter ";
   cin>>n;
   x=0;
   y=1;
   for(z=0;z<=n;z=x+y)
   {
    cout<<" "<<z;
    x=y;
    y=z;
    
   }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
     int arr[14],i,max;
     for(i=0;i<14;i++)
     {
        cout<<"enter number "<<endl;
        cin>>arr[i];
     }
     max =arr[0];
     for(i=0;i<14;i++)
     {
        if(arr[i]>max)
        {
          max = arr[i];
        }
        
     }
     cout<<"the maximum element is ";
     cout<<max;
    return 0;
}
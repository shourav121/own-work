#include<iostream>
using namespace std;
int main()
{
    int idx,arr[]={55,34,56,34,2,21};
    int size =sizeof(arr)/sizeof(arr[0]);
    for(idx=0;idx<size;idx++)
    {
        cout<<arr[idx]<<endl;
    }
    


    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int x=11;
    float y=66;
    cout<<&x<<endl;
    int *ptr=&x;
    cout<<ptr<<endl;
    float *ptrf=&y;
    cout<<ptrf<<endl;
    return 0;
}
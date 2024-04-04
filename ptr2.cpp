#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the number 1"<<endl;
    cin>>a;
    cout<<"enter the number 2"<<endl;
    cin>>b;
    int *ptr1=&a,*ptr2=&b;
    cout<<"the product of "<<*ptr1<<" and "<<*ptr2<<" is "<<*ptr1 * *ptr2;
    return 0;

}
#include<iostream>
using namespace std;
int main()
{
   int marks;
   cout<<"enter your marks and get your grading";
   cin>>marks;
   if(marks>=90&&marks<=100)
   {
    cout<<"A++"<<endl;
   }
    else if(marks>=80&&marks<=90)
    {
        cout<<"A"<<endl;
    
    }
    else if(marks>=70&&marks<=80)
    {
        cout<<"B"<<endl;
    }
    else if(marks>=60&&marks<=70)
    {
        cout<<"B++"<<endl;

    }
    else
    {
        cout<<"FAIL"<<endl;
    }

   
    return 0;
}
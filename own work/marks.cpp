#include<iostream>
using namespace std;
int main()
{
   int hindi,english,math,science,sanskrit,percentage;
    cout<<"enter the mark of hindi"<<endl;
    cin>>hindi;
    cout<<"enter the marks of english"<<endl;
    cin>>english;
    cout<<"enter the marks of math"<<endl;
    cin>>math;
    cout<<"enter the marks of sanskrit"<<endl;
    cin>>sanskrit;
    cout<<"enter the marks of science"<<endl;
    cin>>science;
    
    percentage=(((hindi+english+math+science+sanskrit)*100)/500);
    cout<<"the percentage of 5 subject is"<<percentage<<"%"<<endl;
   
    return 0;
}
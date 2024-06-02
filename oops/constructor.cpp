#include<iostream>
using namespace std;
class rectangle{

    public:
    int l;
    int b;

    rectangle(){//default constructor(no argument is passed)
    l=0;
    b=0;
}

    rectangle(int x,int y){//parameterrised constructor(argument is passed)
        l=x;
        b=y;
    }

    rectangle(rectangle& r){//copy constructor(exixting value is passed in object)
        l= r.l;
        b= r.b;
    }

};


int main()
{
    rectangle r1;
    cout<<r1.l<<" "<<r1.b<<endl;

    rectangle r2(66,98);
    cout<<r2.l<<" "<<r2.b<<endl;

    rectangle r3=r1;
    cout<<r3.l<<" "<<r3.b;

    return 0;
}
#include<iostream>
using namespace std;
class fruit{
    public:
    string name;
    string colour;
    
};
int main()
{
    fruit mango;
    mango.name="mango";
    mango.colour="orange";
    cout<<mango.name<<" "<<mango.colour<<endl;
    
    return 0;
}
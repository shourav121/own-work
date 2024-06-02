#include<iostream>
using namespace std;
class fruit{
    public:
    string name;
    string colour;
    int price;
    
};
int main()
{
    fruit mango;
    mango.name="mango";
    mango.colour="orange";
    mango.price=8;
    cout<<mango.name<<" "<<mango.colour<<mango.price<<endl;

    fruit apple;
    apple.name="apple";
    apple.colour="red";
    cout<<apple.name<<" "<<apple.colour<<endl;

   fruit banana;
   banana.name="banana";
   banana.colour="yellow";
   banana.price=99;
   cout<<banana.name<<banana.colour<<banana.price<<endl;
   

   fruit *kiwi = new fruit();
   kiwi->name="kiwi";
   kiwi->price=66;
   cout<<kiwi->price<<kiwi->name;
    
    return 0;
}
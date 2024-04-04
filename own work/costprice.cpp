#include<iostream>
using namespace std;
int main()
{
    int costprice,sellingprice;
    cout<<"enter cost price of product: ";
    cin>>costprice;
    cout<<"enter selling price of product: ";
    cin>>sellingprice;
    if(costprice>sellingprice)
    {
        cout<<"you are in loss "<<costprice-sellingprice<<" rupees."<<endl;

    }
    if(costprice<sellingprice)
    {

        cout<<"you are in profit "<<sellingprice-costprice<<" rupees."<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int arr[3][3],brr[3][3],crr[3][3];
    cout<<"enter first matrix ";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"enter second matrix ";
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>brr[i][j];
            }
        }
        cout<<"addition is ";
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    crr[i][j]=arr[i][j]+brr[i][j];
                }
            }
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<" "<<crr[i][j];
                }

            }
        
        
    }
    return 0;
}
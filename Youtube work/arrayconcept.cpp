#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7};

    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;

    int size=sizeof(arr)/sizeof(arr[0]);

 //for loop//for loop//for loop//for loop//for loop//for loop//for loop//for loop//for loop//for loop//for loop//for loop
    for(int index=0;index<size;index++)
    cout<<arr[index]<<endl;


 //while loop//while loop//while loop//while loop//while loop//while loop//while loop//while loop//while loop//while loop//while loop
    int index=0;
    while(index<size)
    {
        cout<<arr[index]<<endl;
        index++;
    }

//print vowel taking user//print vowel taking user//print vowel taking user//print vowel taking user//print vowel taking user

      char vowel[5];
      for(int index=0;index<5;index++)
      {
        cin>>vowel[index];
        
      }

     
      for(int index=0;index<5;index++)
      {
        cout<<vowel[index]<<" ";
        
      }
       


    return 0;
}
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream onFile;
    onFile.open("D:\\PDF\\file.txt");
    onFile<<"hghghhghgh";
    onFile.close();
    return 0;
}
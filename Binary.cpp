#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

ifstream in("Input.txt");
ofstream out("Output.txt");

int main()
{
    int temp;
    vector<int> a;
    while(in>>temp)
        a.push_back(temp);
    for(int i=0;i<a.size();i++)
        out<<a[i]<<endl;
}
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    ifstream f;
    f.open("ainput.txt");
    ofstream o;
    o.open("aoutput.txt");
    int arr[10];
    int i;
    for(i=0;i<10;i++)
    {
        f>>arr[i];
    }
    int sum=0;
    for(i=0;i<10;i++)
    {
        sum+=arr[i];
    }
    int mul=1;
    for(i=0;i<10;i++)
    {
        mul*=arr[i];
    }
    o<<"Sum is: "<<sum<<endl;
    o<<"Answer: "<<mul<<endl;
    return 0;
}
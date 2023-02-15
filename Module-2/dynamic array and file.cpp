#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream inputf;
    inputf.open("input.txt");
    ofstream outputf;
    outputf.open("output.txt");
    int n;
    cout<<"n input: ";
    cin>>n;
    int *arr = new int[n];
    int i;
    for(i=0;i<n;i++)
    {
        inputf>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        outputf<<arr[i]<<endl;
    }
    delete [] arr;
    return 0;
}
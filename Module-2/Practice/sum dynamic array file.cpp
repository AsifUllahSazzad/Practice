#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream input;
    input.open("input.txt");
    ofstream output;
    output.open("output.txt");
    int n;
    input>>n;
    int *arr = new int[n];
    int i;
    for(i=0;i<n;i++)
    {
        input>>arr[i];
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    output<<"Sum is: "<<sum<<endl;
    delete [] arr;
    input.close();
    output.close();
}
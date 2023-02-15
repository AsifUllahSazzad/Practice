#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    arr.resize(n);
    int i;
    for(i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    arr.insert(arr.end(),100);
    arr.erase(arr.begin()+4);
    for(i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}
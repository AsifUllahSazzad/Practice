#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int n1;
    cin>>n1;
    vector<int>arr1(n1);
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==i)
        {
            cout<<arr[i]<<", "<<i;
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
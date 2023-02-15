#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maximum = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>maximum)
        {
            maximum = arr[i];
        }
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
/*
Time Complexity: O(n) -> Order of n
Space Complexity: O(n) -> Order of n
*/
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    arr.resize(n);
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;
}
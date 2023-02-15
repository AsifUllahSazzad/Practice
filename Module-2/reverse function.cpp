#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {2,5,1,9,7};
    reverse(arr.begin(),arr.end());
    int i;
    for(i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
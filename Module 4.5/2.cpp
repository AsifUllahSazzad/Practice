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
    vector<int>arr(n);
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mul=1;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        else
        {
            mul = mul*arr[i];
        }
    }
    cout<<mul<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    if(n<0){
    for(i=1;i>=n;i--)
    {
        cout<<i<<" ";
    }
    }
    return 0;
}
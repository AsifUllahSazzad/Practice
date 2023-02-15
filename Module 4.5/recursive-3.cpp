#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n<1)
    {
        return 0;
    }
    int ans = sum(n-1)+n;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
}
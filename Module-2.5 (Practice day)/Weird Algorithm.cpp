#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    int ans1=0,ans=0;
    for(i=1;i<=20;i++){
    if(n%2==0)
    {
        ans = n/2;
        cout<<ans<<endl;
    }
    else{
        ans1 = n*3+1;
        cout<<ans1<<" ";
    }
    }
    return 0;
}
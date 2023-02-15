#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int b = 5;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    int c = 20, f=10, e = 90, d= 40;
    int ans = max({c,e,f,d});
    cout<<ans<<endl;
    int ans2 = min({c,e,f,d});
    cout<<ans2<<endl;
}
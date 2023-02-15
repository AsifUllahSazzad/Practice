#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int time;
    // cin>>time;
    // string ans = (time<18)? "Good Day" : "Good Evening";
    // cout<<ans<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    string ans = (a>b && a>c)? "a big" : (b>a && b>c)? "b big" : "c big";
    cout<<ans<<endl;
}
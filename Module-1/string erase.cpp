#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "I am eating rice.";
    cout<<s.size()<<endl;
    s.erase(s.begin()+16);
    cout<<s<<endl;
}
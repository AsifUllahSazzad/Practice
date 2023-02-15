#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "I am eating rice.";
    int i;

    for(i=0;i<s.size();i++)
    {
        if(s[i] == ' ')
        {
            continue;
        }
        s[i] = s[i]+1;
    }
    cout<<s<<endl;


    return 0;
}
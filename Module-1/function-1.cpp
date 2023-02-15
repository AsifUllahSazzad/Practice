#include<bits/stdc++.h>
using namespace std;
void erase_last_midile(string &s)
{
   
    s.pop_back();
    
    s.erase(s.begin()+4); 
}
string last_middle(string s)
{
    s.pop_back();
    s.erase(s.begin()+4);
    return s;
}
int main()
{
    string s;
    cout<<"String input: ";
    getline(cin,s);
    erase_last_midile(s);
    cout<<"1st Output: "<<s<<endl;
    string ans = last_middle(s);
    cout<<"String function: "<<ans<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int length = s.size(); //string length
    s.pop_back();    //string back character delete
    s.erase(s.begin()+2);//string jee kono character delete
    cout<<"String Length: "<<length<<endl;
    cout<<s<<endl;
    return 0;
}
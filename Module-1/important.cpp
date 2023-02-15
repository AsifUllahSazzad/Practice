#include<bits/stdc++.h>
using namespace std;
int main()
{
    float f;
    cout<<"Input floating number: ";
   cin>>f;
    cin.ignore();
    string str;
    getline(cin,str);
    cout<<"Input floating number: "<<setprecision(2)<<fixed<<f<<endl;
    cout<<"String Length: "<<str.size()<<endl;
    str.pop_back();
    cout<<"Last character delete: "<<str<<endl;
    str.erase(str.begin()+4);
    cout<<"Middle character delete: "<<str<<endl;
    return 0;
}
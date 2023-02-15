#include<bits/stdc++.h>
using namespace std;
int main()
{
    float i;
    cout<<"Floating number: ";
    cin>>i;
    cin.ignore();
    string str;
    cout<<"String input: ";
    getline(cin,str);
    cout<<"String Output: "<<str<<endl;
    cout<<"Floting Output: "<<setprecision(2)<<fixed<<i<<endl;
}
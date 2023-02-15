#include<bits/stdc++.h>
using namespace std;
int main()
{
    //file:
    ifstream in;
    in.open("Inputstring.txt");
    string str;
    getline(in,str);
    str.pop_back();
    str.erase(str.begin()+4);
    cout<<str<<endl;
    cout<<"string size: "<<str.size()<<endl;
    in.close();
    return 0;
}
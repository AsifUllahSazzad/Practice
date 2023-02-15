#include<bits/stdc++.h>
using namespace std;
void strfun(string &str)
{
  ifstream input;
    input.open("str input.txt");
    ofstream output;
    output.open("str output.txt");
int ans = str.size();
    output<<"String Length: "<<ans<<endl;
    str.pop_back();
    output<<"Last Character delete: "<<str<<endl;
    str.erase(str.begin()+4);
    output<<"Middle Character delete: "<<str<<endl;
}
int main()
{
    ifstream input;
    input.open("str input.txt");
    ofstream output;
    output.open("str output.txt");
    float i;
    // cout<<"Floating number: ";
    input>>i;
    input.ignore();
    string str;
    // output<<"String input: ";
    getline(input,str);
    strfun(str);
    // output<<str<<endl;
    output<<"Floting Output: "<<setprecision(2)<<fixed<<i<<endl;
    input.close();
    output.close();
}
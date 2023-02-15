#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    char c;
    float f;
    double d;
    ifstream input;
    input.open("inputfile.txt");
    ofstream output;
    output.open("outputfile.txt");
    input>>x>>c>>f>>d;
    output<<"Integer: "<<x<<endl<<"Character: "<<c<<endl<<"Floating: "<<f<<endl<<"Double: "<<d;
    return 0;
}
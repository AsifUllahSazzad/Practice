#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b && a>=c && b>=c && b>=a){
        cout<<"A and B both are bigger\n";
    }
    else if(a>=c && a>=b && c>=a && c>=b){
        cout<<"A and C both are bigger\n";
    }
    else if(b>=a && b>=c && c>=a && c>=b){
        cout<<"B and C both are bigger\n";
    }
}
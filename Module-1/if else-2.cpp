#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"a is bigger\n";
    }
    else if(b>a && b>c){
        cout<<"b is bigger\n";
    }
    else if(c>a && c>b){
        cout<<"c is bigger\n";
    }
    else{
        cout<<"They are equal\n";
    }

}
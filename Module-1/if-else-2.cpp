#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    if(x>y)
    {
        if(x>z)
        {
            cout<<"x big"<<endl;
        }
    }
    else if(y>z)
    {
        if(y>x)
        {
            cout<<"y big"<<endl;
        }
    }
    else
    {
        cout<<"z big"<<endl;
    }
    return 0;
}
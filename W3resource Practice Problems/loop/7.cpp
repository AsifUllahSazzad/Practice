#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
     cin>>n;
     for(i=1;i<=10;i++)
     {
        for(j=1;j<=n;j++)
        {
            if(j>=n){
                cout<<j<<"*"<<i<<" = "<<j*i;
            }
            else{
            cout<<j<<"*"<<i<<" = "<<j*i<<", ";
            }
        } 
        cout<<endl; 
     }
}
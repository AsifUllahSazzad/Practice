#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"Sum is: "<<sum<<endl;
    float avg = (float)sum/n;
    cout<<"Average is: "<<setprecision(6)<<fixed<<avg<<endl;
}
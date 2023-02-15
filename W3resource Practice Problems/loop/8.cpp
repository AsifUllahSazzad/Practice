#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    cin>>n;
    cout<<"Odd number is: ";
    for(i=1;i<=n;i++)
    {
        int odd = 2*i-1;
        cout<<odd<<" ";
        sum+=odd;
    }
    cout<<endl;
    cout<<"Sum is: "<<sum<<endl;
}
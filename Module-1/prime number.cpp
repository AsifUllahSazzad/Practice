#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++)
    {
        if(n%2==0)
        {
            cout<<"n: "<<n<<endl;
            cout<<"Not prime number"<<endl;
            break;
        }
        cout<<i<<endl;
    }
    if(i==n)
    {
        cout<<"Prime number\n";
    }
    return 0;
}
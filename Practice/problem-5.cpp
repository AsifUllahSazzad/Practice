#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int t;
    cin>>t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==t)
            {
                cout<<"Yes"<<endl;
            }
        }
        break;
}
cout<<"No"<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i,j;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2])
            {
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
            break;
        }
        break;
    }
}
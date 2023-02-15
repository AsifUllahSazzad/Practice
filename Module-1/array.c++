#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int multi=1;
    for(i=0;i<n;i++)
    {
        multi*=arr[i];
    }
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Multiplication is: "<<multi<<endl;
    return 0;
}
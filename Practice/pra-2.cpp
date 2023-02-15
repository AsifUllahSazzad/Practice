#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<"even: "<<arr[i]<<endl;
        }
        else{
            cout<<"Odd: "<<arr[i]<<endl;
        }
    }
}
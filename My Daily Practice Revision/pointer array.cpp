#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int *ptr;
    ptr = arr;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<*ptr<<" ";
        *ptr++;
    }
}
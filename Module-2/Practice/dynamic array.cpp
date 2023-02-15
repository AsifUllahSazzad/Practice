#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n]; //dynamic array
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"---------------------"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[]arr;
    return 0;
}
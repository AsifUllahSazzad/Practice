#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {10,20,30,40,50};
    cout<<arr.capacity()<<endl;
    int i;
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
}
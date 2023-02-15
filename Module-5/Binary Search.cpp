#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Input Key is: ";
    cin>>key;
    int mid;
    int start=0,end=n;
    bool stop;
    while(start<=end)
    {
        mid = (start+end)/2;
        if(arr[mid]==key)
        {
            cout<<key<<" position of: "<<mid<<endl;
            stop = 1;
            break;
        }
        else if(key<arr[mid])
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    if(stop==0)
    {
        cout<<"This value not here!"<<endl;
    }
}
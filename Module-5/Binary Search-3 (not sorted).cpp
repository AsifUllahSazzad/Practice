#include<bits/stdc++.h>
using namespace std;
/*
Time Complexity: O(n+n/2^k) -> O(n/2^k) -> k= log2^n
*/
int main()
{
    int n;
    cout<<"Input n size array: ";
    cin>>n;
    vector<int>arr(n);
    int i;
    for(i=0;i<n;i++)            //O(n)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        sort(arr.begin(),arr.end());
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<endl<<endl;
    int key;
    cout<<"Search Element: ";
    cin>>key;
    int start=0,end=n;
    bool stop;
    while(start<=end)           //O(n/2^k)
    {
        int mid = (start+end)/2;
        if(arr[mid]==key)
        {
            cout<<key<<" Value Position is: "<<mid<<" element"<<endl;
            stop = 1;
            break;
        }
        else if(arr[mid]<key)
        {
            start = mid+1;
        }
        else{
            //arr[mid]>key
            end = mid - 1;
        }
    }
    if(stop==0)
    {
        cout<<"This value not found!"<<endl;
    }
    return 0;
}
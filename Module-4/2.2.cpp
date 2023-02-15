#include<bits/stdc++.h>
using namespace std;
/*
Time Complexity: O(n+1+n+1) -> O(n) -> Order of n
Memory Complexity: O(n+1) -> O(n) -> Order of n
*/
int main()
{
    int n;      //O(1)
    cin>>n;
    vector<int>arr;
    arr.resize(n);      //O(n)
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi = arr[0];
    int mini = arr[0];
    int sum=0;
    for(i=0;i<n;i++)
    {
        maxi = max(arr[i],maxi);
        mini = min(arr[i],mini);
        sum += arr[i];
    }
    cout<<"Max is: "<<maxi<<endl;
    cout<<"Min is: "<<mini<<endl;
    cout<<"Sum is: "<<sum<<endl;

    return 0;
}
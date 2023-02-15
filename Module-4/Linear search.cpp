#include<bits/stdc++.h>
using namespace std;
/*
Time Complexity: O(n) -> Order of n
Memory Complexity:  O(n)
*/
int main()
{
    int n;
    cout<<"Array size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"-----------------------"<<endl;
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Array Element:"<<(i)<<" input: ";
        cin>>arr[i];
    }
    int s;
    cout<<"Searching Value: ";
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(arr[i] == s)
        {
            cout<<"Value "<<s<<" Searching Positon is: "<<i<<endl;
            break;
        }
    }
    
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a = new int[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"-------------------------"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    delete[]a;
}
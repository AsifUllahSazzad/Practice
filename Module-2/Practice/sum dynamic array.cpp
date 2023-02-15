#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"n input: ";
    cin>>n;
    int *arr = new int[n];
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum is: "<<sum<<endl;
    delete [] arr;

}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]; //0,1,2,3,4,5,6,7,8,9
    int i,sum=0;
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<10;i++)
    {
        sum = sum + arr[i];
    }
    cout<<"Answer: "<<sum<<endl;
    return 0;
}
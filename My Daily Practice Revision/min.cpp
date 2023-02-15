#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3,5,1,4,8,2};
    int i;
    int maxi = arr[0];
    for(i=0;i<6;i++)
    {
        // if(arr[i]<mini)
        // {
        //     mini = arr[i];
        // }
            maxi = max(maxi,arr[i]);
            }
    cout<<maxi<<endl;
}
#include<bits/stdc++.h>
using namespace std;
void element(int arr[],int n)
{
    if(n<0){
        return;
    }
    cout<<arr[n]<<" ";
    element(arr-1,n);
}
int main()
{
    int i=1;
    int n=6;
   int arr[]={2,4,6,8,10,12};
   element(arr,n);
}
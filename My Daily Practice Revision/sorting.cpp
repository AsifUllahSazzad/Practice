#include<bits/stdc++.h>
using namespace std;

int main() {
   int arr[] = {2,4,1,5,6};
   int i,j;
   for(i=0;i<5;i++)
   {
    for(j=i;j<5;j++)
    {
        if(arr[i]>arr[j])
        {
            swap(arr[i],arr[j]);
        }
    }
   }

   for(i=0;i<5;i++)
   {
    cout<<arr[i]<<" ";
   }
    return 0;
}
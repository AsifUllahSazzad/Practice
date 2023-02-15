#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {10,20,40};
    int size = 3,index = 2,element=30;
    int i;
 
    for(i=size-1;i>=index;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
       size+=1;
    if(size>=index){
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int arr[n];
    int *ptr;
    ptr = arr;
    int **p;
    p = &ptr;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<**p<<" ";
        ptr++;
    }
}
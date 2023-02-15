#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {10,20,30,40,50};
    int *ptr;
    ptr = arr;
    int i;
    for(i=0;i<5;i++)
    {
        cout<<i<<")"<<"Value is: "<<*ptr<<endl;
        ptr++;
        // cout<<i<<")"<<"Value is: "<<ptr[i]<<endl;
    }
    // cout<<*ptr<<endl;
    // cout<<*(ptr+1)<<endl;
    // cout<<*(ptr+2)<<endl;
    // cout<<*(ptr+3)<<endl;
    // cout<<*(ptr+4)<<endl;
}
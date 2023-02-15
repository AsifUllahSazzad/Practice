#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4] = {10,20,30,40};
    int *ptr = arr;
    int **p = &ptr; //pointer to pointer
    
    // cout<<"ptr address: "<<p<<endl;
    // cout<<"p value: "<<**p<<endl; //**p= arr; //**p = &ptr -> *ptr = arr
    int i;
    for(i=0;i<4;i++)
    {
        cout<<i<<")"<<"Value is: "<<**p<<endl;
        ptr++;
    }
}
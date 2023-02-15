#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10,20,30};
    int *ptr;
    ptr = arr;        //array address

    // cout<<"Address: "<<ptr+1<<endl;
    // cout<<"Value: "<<*ptr<<endl;    //arr[0] = 10
    // cout<<"Value: "<<*(ptr+1)<<endl; //arr[1] = 20
    // cout<<"Value: "<<*(ptr+2)<<endl; //arr[2] = 30
    int i;
    for(i=0;i<3;i++)
    {
        cout<<i<<")"<<"Value is: "<<ptr[i]<<endl; //*ptr[i] = ptr[i]
    }

}
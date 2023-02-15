#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int *ptr;
    ptr = &a;
    cout<<"Address of a: "<<ptr<<endl;
    cout<<"Value of a: "<<*ptr<<endl;
}
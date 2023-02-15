#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *x = new int;
    cin>>*x;
    cout<<"Value: "<<*x<<endl;
    cout<<"Address: "<<x<<endl;
    delete x;
}
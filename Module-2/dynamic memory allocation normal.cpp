#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int;
    cin>>*a;
    cout<<"Value: "<<*a<<endl;
    cout<<"Address: "<<a<<endl;
    delete a; //delete
}
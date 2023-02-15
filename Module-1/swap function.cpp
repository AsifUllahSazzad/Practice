#include<bits/stdc++.h>
using namespace std;
void swap_f(int &b,int &a)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a =5;
    int b = 10;
    swap_f(b,a);
    cout<<"Swap "<<a<<" & "<<b<<endl;
    return 0;
}
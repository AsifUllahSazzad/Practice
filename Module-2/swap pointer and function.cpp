#include<bits/stdc++.h>
using namespace std;
void swap_f(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b= temp;
}
int main()
{
    int a =5;
    int b =10;
    swap_f(&a,&b);
    cout<<a<<" "<<b<<endl;
}
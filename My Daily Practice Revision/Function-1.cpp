#include<iostream>
using namespace std;

void print(int n)
{
    int i;
    for(i=-n;i>=n;i--)
    {
        cout<<i<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}
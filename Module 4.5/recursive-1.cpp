#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    if(n<1)
    {
        return;
    }
    else{
    cout<<n<<endl;  //5,4,3,2,1
    print(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    print(n);   //
}
#include <bits/stdc++.h>
using namespace std;
int x=10;
namespace info
{
    int x = 5;
    int mul(int a,int b)
    {
        return a*b;
    }
};
int main()
{
    int a=5,b=4;
    int ans = info::mul(a,b);
    cout<<ans<<endl;
    cout << info::x << endl;
    cout << "My name is Asif Ullah Sazzad" << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
for(i=0;i<5;i++)
{
    if(i==3){
        break;
    }
    cout<<i<<endl;
}
cout<<"-------------------"<<endl;
    for(i=0;i<5;i++)
    {
        if(i==3){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
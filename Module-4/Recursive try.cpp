#include<bits/stdc++.h>
using namespace std;
int sum(int n,int i)
{
    int s=0;
    if(n==1){
       
        return i;
        
    }
    else{
        s=n+sum(n-1,n); 
    }
    return s+i;
}
int main()
{
    int n,i;
    cin>>n>>i;
    int ans = sum(n,i);
    cout<<ans<<endl;
}
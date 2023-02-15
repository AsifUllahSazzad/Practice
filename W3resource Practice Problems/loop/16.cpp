#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    cin>>n;
    cout<<"The even numbers are: ";
    for(i=1;i<=n*2;i++)
    {
        if(i%2==0){
            cout<<i<<" ";
            sum+=i;
        }
    }
    cout<<endl;
    cout<<"The Sum of even Natural Number upto "<<n<<" terms: "<<sum<<endl;
}
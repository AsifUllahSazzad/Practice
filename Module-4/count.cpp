#include<bits/stdc++.h>
using namespace std;
/*
Time Complexity: O(n^2+1) = O(n^2)
Memory Comlexity: O(1)
*/
int main()
{
    int n,i,j;
    cin>>n;        //O(1)
    int count = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            count = count +1;
        }
    }
    cout<<"n: "<<n<<", count: "<<count<<endl;
}
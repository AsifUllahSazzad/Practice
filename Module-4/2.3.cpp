#include<bits/stdc++.h>
using namespace std;
/*
Time Complexity: O(n+n*(n-1)/2)->O(n+(n^2/2)-(n/2)) ->O(n+n^2-n) -> O(n^2)
Memory Complexity: O(n+1) -> O(n)
*/
int main()
{
    int n,i,j;
    cin>>n;         //O(1)
    vector<int>arr(n);   //O(n)  

    for(i=0;i<n;i++)       //O(n)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)      
    {
        string ans = "NO";
        for(j=i+1;j<n;j++)
        {
            if(i==j){
            continue;
            }
               
            if(arr[i]==arr[j])
            {
                ans = "Yes";
            }
        }
            cout<<i<<" = "<<ans<<endl;   
    }
}
/*
n=4
2,6,4,2
j>i
*/

/*
i=0, j=1, n-1 = 2
i=1,j=2,n-2 = 1
i=2,j=3,n-3 = 0

O(n+(n-1)+(n-2)+(n-3)+....2+1+0)
*/
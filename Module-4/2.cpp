#include<bits/stdc++.h>
using namespace std;
/*
Time complexity: O(1) -> order of 1.
Memory complexity: O(1) -> order of 1.
*/
//Constant Program:
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int maxi = max({a,b,c});
    int mini = min({a,b,c});
    int sum = a+b+c;
    int multiplication = a*b*c;
    cout<<"Max is: "<<maxi<<endl;
    cout<<"Min is: "<<mini<<endl;
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Multiplication is: "<<multiplication<<endl;
}
/*
max
min
sum
multiplication
*/
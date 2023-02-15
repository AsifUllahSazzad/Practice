#include<bits/stdc++.h>
using namespace std;
void update(int *a,int *b) {
    int sum= abs(*a+*b);
    int sub = abs(*a-*b); 
    cout<<sum<<endl;
    cout<<sub<<endl;  
}

int main() {
    int a,b;
    cin>>a>>b;
    int *pa = &a;
    int *pb = &b;
    
    update(pa, pb);

    return 0;
}
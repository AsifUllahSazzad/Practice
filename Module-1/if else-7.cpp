#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a<=32){
        cout<<"F"<<endl;
    }
    else if(a<=39){
        cout<<"D"<<endl;
    }
    else if(a<=49){
        cout<<"C"<<endl;
    }
    else if(a<=59){
        cout<<"B"<<endl;
    }
    else if(a<=69){
        cout<<"A-"<<endl;
    }
    else if(a<=79){
        cout<<"A"<<endl;
    }
    else if(a<=100){
        cout<<"A+"<<endl;
    }

}
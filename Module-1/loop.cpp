#include<bits/stdc++.h>
using namespace std;
namespace i{
    int i=0; //define
}
int main()
{
    int i;
    i =0;
    cout<<"While loop: "<<endl;
    while(i<5)
    {
        cout<<i<<endl;
        i++;
    }
    cout<<"For loop: "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<i<<endl;
    }
    cout<<"Do while loop: "<<endl;
    i= 0;
    do{
        cout<<i<<endl;
        i++;
    }while(i<5);
    
    return 0;
}
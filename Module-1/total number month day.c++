#include<bits/stdc++.h>
using namespace std;
int main()
{
    int month;
    cout<<"Input Months Number: ";
    cin>>month;
    switch(month)
    {
        case 1:
        cout<<31<<endl;
        break;
        case 2:
        cout<<28<<endl;
        break;
        case 3:
        cout<<"Total numbers of day: "<<31<<endl;
        break;
        case 4:
        cout<<30<<endl;
        break;
        default:
        cout<<"Not any month."<<endl;
    }
    return 0;
}
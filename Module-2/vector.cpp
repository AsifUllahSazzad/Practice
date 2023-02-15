#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a = {10,20, 30 , 40 , 50};
    a.resize(5);
    int i;
    // for(i=0;i<a.size();i++)
    // {
    //     a.push_back(i); //add new element
    // }
    a.insert(a.begin()+1,100); //insert new element nijer ischa
    a.erase(a.begin()+3);
    a.pop_back();             //last element delete
    for ( i = 0; i <a.size(); i++) //a.size() number return
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}
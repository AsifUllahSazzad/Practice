#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    ifstream input;     //input function use
    input.open("vector input.txt");
    int n;
    input>>n;
    vector<int>arr;
    arr.resize(n);      //koto size nibo
    int i;
    for(i=0;i<arr.size();i++)
    {
        input>>arr[i];
        // arr.push_back(i);   //add array element
    }
    arr.erase(arr.begin()+2); //array which element remove
    arr.insert(arr.begin()+2,100); //array which element value insert
    arr.pop_back();          //array last element delete
    for(i=0;i<arr.size();i++)
    {
        cout<<i<<")"<<"Array Element: "<<arr[i]<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=5,b=7,c=10,d=11,e=3;

    int maxi = max(a,b);     //maximum
    int mini = min(a,b);     //minimum
    swap(a,b);            //swap
    cout<<"Maximum: "<<maxi<<endl;
    cout<<"Minimum: "<<mini<<endl;
    cout<<"Swap: "<<a<<" "<<b<<endl;

    int maxi2 = max({a,b,c,d,e});   //maximum - 2ohdik
    int mini2 = min({a,b,c,d,e});   //minimum - 2ohdik
    cout<<"Maximum: "<<maxi2<<endl;
    cout<<"Minimum: "<<mini2<<endl;
// ------------->sorting function<------------
    vector<int>arr = {30,20,40,10,50};
    int i;
    for(i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Before Sorting"<<endl;
    sort(arr.begin(),arr.end());    //sob sort function
    for(i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"After Sorting"<<endl<<endl;
//-------------->Mini sort function<---------------
    vector<int>arr2 = {30,50,20,10,40};
    cout<<"Before sorting: ";
    for(i=0;i<arr2.size();i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    sort(arr2.begin()+2,arr2.begin()+3+1); //choto sort function

    cout<<"After sorting: ";
    for(i=0;i<arr2.size();i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    return 0;
}
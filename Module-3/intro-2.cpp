#include<bits/stdc++.h>
using namespace std;
class car{
public:
    string bmw;
    car *rolls_royce, *mini;
    void bmwinformation()
    {
        cout<<"Rolls Royce Model: "<<rolls_royce->bmw<<endl;
        cout<<"Mini Model: "<<mini->bmw<<endl;
    }
};
int main()
{
    car model;      //object name
    model.rolls_royce = new car;
    model.mini = new car;
   model.rolls_royce->bmw = "Rolls Royce Phantom";
   model.mini->bmw = "Mini Roadster";
   model.bmwinformation();

}
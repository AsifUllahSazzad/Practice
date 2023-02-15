#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int roll;
    student(string name,int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    void print()
    {
        cout<<name<<endl;
        cout<<roll<<endl;
    }
};
int main()
{
    student details("John",2);
    details.print();
}
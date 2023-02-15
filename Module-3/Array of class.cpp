#include<bits/stdc++.h>
using namespace std;
class admin{
    public:
    int id,age;
    string name;

    //Must array Constructor:
    admin()
    {

    }
    //Constructor:
    admin(int id,string name,int age)
    {
        this->name = name;
        this->id = id;
        this->age = age;
    }
    //Print function:
    void print_info()
    {
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
    }
};
int main()
{
    admin info[10];
    int i;
    for(i=0;i<10;i++)
    {
        info[i] = admin(i,"Asif Ullah",23);
    }
    for(i=0;i<10;i++)
    {
        info[i].print_info();
    }

}
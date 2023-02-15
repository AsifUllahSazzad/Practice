#include<bits/stdc++.h>
using namespace std;
class nid_information{
    public:
    string name;
    int id,age;
    //Constructor:
    nid_information(string name,int id,int age)
    {
        this -> name = name;
        this -> id = id;
        this -> age = age;
    }
    //Output function:
    void print_info()
    {
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<age<<endl;
    }
};
int main()
{
    nid_information *info = new nid_information("Sazzad",223002322,22);
    info->print_info();
    delete info;
}
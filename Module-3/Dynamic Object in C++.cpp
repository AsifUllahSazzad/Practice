#include<bits/stdc++.h>
using namespace std;
class user{
    public:
    string name;
    int age,id;
    user *brother,*sister;

    void printinfo()
    {
        cout<<brother->name<<endl;
        cout<<brother->age<<endl;
        cout<<brother->id<<endl;
        cout<<sister->name<<endl;
        cout<<sister->age<<endl;
        cout<<sister->id<<endl;
    }
    ~user(){
        delete brother;
        delete sister;
    }
};
int main()
{
    user info;
    info.brother = new user;
    info.sister = new user;
    info.brother->name = "Asif Ullah";
    info.brother->age = 22;
    info.brother->id = 223002322;
    info.sister->name = "Taslima Begum Shipra";
    info.sister->age = 26;
    info.sister->id = 59;
    info.printinfo();
}
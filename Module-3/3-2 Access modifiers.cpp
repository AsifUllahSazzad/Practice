#include<bits/stdc++.h>
using namespace std;
class student{
private:
string name;
public:
int age;
int id;
void getdata(string myname)
{
    name = myname;
}
void information()
{ cout<<name<<endl;
    cout<<age<<endl;
    cout<<id<<endl;
}
};
   

int main()
{
    student objname;
    objname.id = 223002322;
    objname.age = 23;
    objname.getdata("Asif Ullah Sazzad");
    objname.information();
}
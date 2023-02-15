#include<bits/stdc++.h>
using namespace std;
class nid{
private:
string father,mother;
public:
string name;
void setnidcard(string mydad, string mymom)
{
    father = mydad;
    mother = mymom;
}
void nidinformation()
{
    cout<<"My name: "<<name<<endl;
    cout<<"Father's name: "<<father<<endl;
    cout<<"Mother's name: "<<mother<<endl;
}
};
int main()
{
    nid card;
    card.name = "Asif Ullah Sazzad";
    card.setnidcard("Enayet Ullah","Nazma Ullah");
    card.nidinformation();
}
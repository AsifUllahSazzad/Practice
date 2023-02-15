#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    string name;
    person *father,*mother;

    person()
    {
        father = NULL;
        mother = NULL;
    }
    //Constructor:
    person(string Name,string myfather,string mymother)
    {
        name = Name;
        father = new person;
        father->name = myfather;
        mother = new person;
        mother->name = mymother;
    }
    //Output function:
    void information()
    {
        cout<<name<<endl;
        cout<<father->name<<endl;
        cout<<mother->name<<endl;
    }
    //Destructor:
    ~person()
    {
        if(father != NULL){
            delete father;
        // cout<<"Everything destroy!"<<endl;
        }
        if(mother != NULL)
        {
            delete mother;
        // cout<<"Everything destroy!"<<endl;
        }
    }
};
int main()
{
    person info("Asif Ullah Sazzad","Enayet Ullah","Nazma Ullah");
    info.information();
}
#include<bits/stdc++.h>
using namespace std;
class admin{
    protected:
    string position;
};
class employe:admin{
    string name;
    private:
    int id,age;
    public:
    float salary;
    //Inheritance:
    void setdata(string name,string position,int id,int age,float salary)
    {
        this->name = name;
        this->position = position;
        this->id = id;
        this->age = age;
        this->salary = salary;
    }
    //Output print function:
    void print_info()
    {
        cout<<name<<endl;
        cout<<position<<endl;
        cout<<id<<endl;
        cout<<age<<endl;
        cout<<salary<<endl;
    }
};
class family{
    public:
    string name;
    int age;
    string father,mother,sister;
    int father1,mother1,sister1;
    //Constructor:
    family(string name,int age,string father,int father1,string mother,int mother1,string sister,int sister1)
    {
        this->name = name;
        this->age = age;
        this->father = father;
        this->father1 = father1;
        this->mother = mother;
        this->mother1 = mother1;
        this->sister = sister;
        this->sister1 = sister1;
    }
    void printf_information()
    {
        cout<<endl<<"----------------------------"<<endl<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<father<<endl;
        cout<<father1<<endl;
        cout<<mother<<endl;
        cout<<mother1<<endl;
        cout<<sister<<endl;
        cout<<sister1<<endl;
    }
};
int main()
{
    employe information;
    information.setdata("Asif Ullah","AI Engineer",223002322,23,255034.50);
    information.print_info();
    family *info = new family("Asif",22,"Enayet",62,"Nazma",54,"Shipra",27);
    info->printf_information();
    delete info;
}
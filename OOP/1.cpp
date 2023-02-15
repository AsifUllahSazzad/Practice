#include<iostream>
using namespace std;

class student
{
    // string name;
public:
    string name;
int age;
string gender;

//-------->Function Called<-----------
// void setname(string name)
// {
//     this->name = name;
// }

//---------->Constructor<------------
    student()
    {

    }//Default Constructor
    student(string name,int age,string gender)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
    }//Parameterised Constructor

    student(student &info)
    {
        name = info.name;
        age = info.age;
        gender = info.gender;
    } //Copy Constructor

//--------->Destructor<---------------
    ~student()
    {
        
    }//Destructor

//--------->Output Option<---------------
    void printinfo()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }
};

int main()
{
    int n,i;
    cout<<"N input: ";
    cin>>n;
    student info("Asif",21,"Male");
    student info2 = info;

    info.printinfo();
    cout<<endl<<"-----------------"<<endl;
    info2.printinfo();

    // string name;
    //  getchar();
    // for(i=0;i<n;i++)
    // {
    //     cout<<"Name: ";
    //     getline(cin,name);
    //     info[i].setname(name);

    //     cout<<"Age: ";
    //     cin>>info[i].age;

    //     getchar();

    //     cout<<"Gender: ";
    //     cin>>info[i].gender;
        
    //     getchar();
    // }

    // for(i=0;i<n;i++)
    // {
    //     info[i].printinfo();
    // }
    return 0;
}
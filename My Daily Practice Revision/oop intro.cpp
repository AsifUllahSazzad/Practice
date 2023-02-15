#include<bits/stdc++.h>
using namespace std;
class student{
public:
string name;
student *father,*mother,*id;
int age;
void student_information()          //function
{
    cout<<"Name: "<<name<<endl;
    cout<<"Id: "<<id->name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Father's name: "<<father->name<<endl;
    cout<<"Mother's name: "<<mother->name<<endl;
}
};
int main()
{
    student details;            //object name
    details.name = "Asif Ullah Sazzad";
    details.id = new student;
    details.id->name = "223002322E";
    details.father = new student;
    details.mother = new student;
    details.father->name = "Enayet Ullah";
    details.mother->name = "Nazma Ullah";
    details.age = 23;
   details.student_information();
}
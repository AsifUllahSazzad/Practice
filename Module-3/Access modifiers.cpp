#include <bits/stdc++.h>
using namespace std;
class admin
{
protected:
    string position;
};
class employee : admin
{
private:
    string name;
    int age;

public:
    float salary;
    void setinformation(string emname, string position, int ag)
    {
        name = emname;
        age = ag;
        this->position = position;
    }
    void printinformation()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Position: " << position << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    employee information;
    information.salary = 25500;
    information.setinformation("Asif Ullah Sazzad", "AI Engineer", 24);
    information.printinformation();
}
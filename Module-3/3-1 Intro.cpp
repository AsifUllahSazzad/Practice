#include<bits/stdc++.h>
using namespace std;
class student{      //class
public:
                    //object:
string name;
int id;
int age;
string father_name;
string mother_name;
void information()
{
    cout<<name<<endl;
    cout<<id<<endl;
    cout<<age<<endl;
    cout<<father_name<<endl;
    cout<<mother_name<<endl;
}
};
class rectangle{
    public:
    int height,width;
    student s;
    //area:
    int rectangle_area()
    {
        int ans = height*width;
        return ans;
    }
    //perimeter:
    int rectangle_parameter()
    {
        int ans = 2*(height+width);
        return ans;
    }
};
int main()
{
    student info;       //object name
    info.name="Asif Ullah Sazzad";
    info.id = 223002322;
    info.age = 23;
    info.father_name = "Enayet Ullah";
    info.mother_name = "Nazma Ullah";
    info.information();
    cout<<endl<<endl<<"---------------------"<<endl<<endl;
    student info_2;       //object name
    info_2.name="Rithika Islam";
    info_2.id = 1780;
    info_2.age = 22;
    info_2.father_name = "x";
    info_2.mother_name = "y";
    info_2.information();
    cout<<endl<<endl<<"--------------------------"<<endl<<endl;
    rectangle area,area2;
    area.width= 8;
    area.height = 4;
    cout<<"Rectangle area is: "<<area.rectangle_area()<<endl<<endl;
    cout<<"Rectangle perimeter is: "<<area.rectangle_parameter()<<endl<<endl;
    area2.width = 9;
    area2.height = 3;
    cout<<"Rectangle area is: "<<area2.rectangle_area()<<endl<<endl;
    cout<<"Rectangle perimeter is: "<<area2.rectangle_parameter()<<endl<<endl;
    area.s.name = "Asif Ullah";
    cout<<"Name: "<<area.s.name<<endl;
    return 0;
}
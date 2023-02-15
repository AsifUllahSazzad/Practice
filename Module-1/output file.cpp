#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream f1;
    f1.open("out.txt");
    f1<<"My name is Asif Ullah Sazzad."<<endl<<"I am 22 years old."<<endl;
    ofstream f2;
    f2.open("out-2.txt");
    f2<<"I am study in Computer Science and Engineering at East Delta University";
    return 0;
}
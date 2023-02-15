#include<bits/stdc++.h>
using namespace std;
class car{
public:
string tata,toyota;
int model;
car(int model)
{
    this->model = model;
}
car(string tata,string toyota,int model)
{
    this->tata = tata;
    this->toyota = toyota;
    this -> model = model;
}

void information()
{
    cout<<tata<<endl;
    cout<<toyota<<endl;
    cout<<model<<endl;
}
};
int main()
{
    car info("Tata kot","Toyota back",2234);
    info.information();
    car info2(12);
    info2.information();
}
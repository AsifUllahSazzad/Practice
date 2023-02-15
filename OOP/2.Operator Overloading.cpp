#include<iostream>
using namespace std;

class Complex{
public:
int real,imag;

    Complex()
    {

    }//Default Constructor
    Complex(int real,int imag)
    {
        this->real = real;
        this->imag = imag;
    }//Parameterised Constructor

    Complex(Complex &c1)
    {
       real = c1.real;
       imag = c1.imag;
    }//Copy Constructor

    Complex(Complex &c2)
    {
        real = c2.real;
        imag = c2.imag;
    }

    void printcomplex()
    {
        cout<<real<<" "<<imag<<endl;
    }
    Complex operator +(Complex c)
    {
        int temp = 
    }
};

int main()
{
    Complex c1(5,4);
    Complex c2(2,5);
    Complex c3;
    c3 = c1+c2;
    c3.printcomplex();
    return 0;
}
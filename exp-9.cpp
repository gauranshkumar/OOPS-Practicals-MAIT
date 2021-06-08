#include <iostream>
using namespace std;
class Complex
{
public:
    int real;
    int imag;
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int com)
    {
        real = com;
        imag = com;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    void add(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
};
int main()
{
    Complex c1(8, 10);
    Complex c2(20);
    Complex c3;
    c3.add(c1, c2);
    cout << "Sum of Complex No. is : " << c3.imag << "i +" << c3.real << endl;
}
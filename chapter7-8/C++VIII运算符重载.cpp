#include <bits/stdc++.h>
using namespace std;

class Complex
{
    double real;
    double imaginary;
  public:
    Complex(double r = 0.0, double i = 0.0): real(r), imaginary(i)
    {
    }
    Complex operator + (const Complex &c2) const
    {
      return Complex(real + c2.real, imaginary + c2.imaginary);
    }
    Complex operator - (const Complex &c2) const
    {
      return Complex(real - c2.real, imaginary - c2.imaginary);
    }
    // Êä³ö¸´Êý
    void display() const
    {
      cout<<"("<<real<<", "<<imaginary<<")"<<endl;
    }
};

int main()
{
  Complex c1(5, 4), c2(2, 10), c3;
  c1.display();
  c2.display();
  c3 = c1 - c2;
  c3.display();
  c3 = c1 + c2;
  c3.display();
  return 0;
}


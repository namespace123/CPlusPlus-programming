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
    friend Complex operator + (const Complex &c1, const Complex &c2);
    friend Complex operator - (const Complex &c1, const Complex &c2);
    friend ostream & operator<<(ostream &out, const Complex &c);
    // Êä³ö¸´Êý
    void display() const
    {
      cout<<"("<<real<<", "<<imaginary<<")"<<endl;
    }
};
Complex operator + (const Complex &c1, const Complex &c2)
{
  return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}
Complex operator - (const Complex &c1, const Complex &c2)
{
  return Complex(c1.real - c2.real, c1.imaginary - c2.imaginary);
}
ostream & operator << (ostream &out, const Complex &c)
{
  out<<"("<<c.real<<", "<<c.imaginary<<")";
  return out;
}

int main()
{
  Complex c1(5, 4), c2(2, 10), c3;
  c1.display();
  c2.display();
  c3 = c1 - c2;
  cout<<"c3 = c1 - c2 = "<<c3<<endl;
  c3 = c1 + c2;
  cout<<"c3 = c1 + c2 = "<<c3<<endl;
  return 0;
}


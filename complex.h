#include <iostream>

using namespace std;

class Complex {
public:
  // Data members to store real and imaginary parts of a complex number.
  double real;
  double imag;

  // Constructors for the Complex class.
  Complex();               // Default constructor.
  Complex(double, double); // Parameterized constructor.

  // Overloaded output operator to display Complex numbers.
  friend ostream &operator<<(ostream &, const Complex &);

  // Overloaded input operator to read in Complex numbers.
  friend istream &operator>>(istream &, Complex &);

  // Overloaded operators for basic arithmetic operations.
  Complex operator+(const Complex &); // Addition.
  Complex operator-(const Complex &); // Subtraction.
  Complex operator*(const Complex &); // Multiplication.
  Complex operator/(const Complex &); // Division.

  // Method to calculate the magnitude (absolute value) of a Complex number.
  double mag();

  // Friend function to calculate the magnitude of a Complex number.
  friend double mag(const Complex &);

  // Method to calculate the complex conjugate of a Complex number.
  Complex conjugate();

  // Friend function to calculate the complex conjugate of a Complex number.
  friend Complex conjugate(const Complex &);

  // Operator overloading for scalar multiplication from the right.
  Complex operator*(const double);

  // Friend function for scalar multiplication from the left.
  friend Complex operator*(const double, const Complex &);
};

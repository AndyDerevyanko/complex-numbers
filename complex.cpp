#include "complex.h"
#include <cmath>

Complex::Complex()
    : real(0), imag(0){}; // Default constructor, initializes to 0.
Complex::Complex(double real, double imag)
    : real(real), imag(imag){}; // Parameterized constructor.

// Overloading the insertion operator to display a Complex number.
ostream &operator<<(ostream &out, const Complex &complex) {
  if (complex.imag < 0)
    out << complex.real << " - " << abs(complex.imag)
        << "i"; // Format complex number with '-' for negative imaginary part.
  else
    out << complex.real << " + " << complex.imag
        << "i"; // Format complex number with '+' for non-negative imaginary
                // part.
  return out;
}

// Overloading the extraction operator to input a Complex number.
istream &operator>>(istream &in, Complex &complex) {
  cout << "Please enter the real part: ";
  in >> complex.real;
  cout << "Please enter the imaginary part: ";
  in >> complex.imag;
  return in;
}

// Overloaded operators for basic arithmetic operations.
Complex Complex::operator+(const Complex &complex) {
  Complex temp;
  temp.real = this->real + complex.real;
  temp.imag = this->imag + complex.imag;
  return temp;
}

Complex Complex::operator-(const Complex &complex) {
  Complex temp;
  temp.real = this->real - complex.real;
  temp.imag = this->imag - complex.imag;
  return temp;
}

Complex Complex::operator*(const Complex &complex) {
  Complex temp;
  temp.real = this->real * complex.real - this->imag * complex.imag;
  temp.imag = this->real * complex.imag + this->imag * complex.real;
  return temp;
}

Complex Complex::operator/(const Complex &complex) {
  Complex temp;
  temp.real = (this->real * complex.real + this->imag * complex.imag) /
              (pow(complex.real, 2) + pow(complex.imag, 2));
  temp.imag = (this->imag * complex.real - this->real * complex.imag) /
              (pow(complex.real, 2) + pow(complex.imag, 2));
  return temp;
}

double Complex::mag() {
  return sqrt(
      pow(this->real, 2) +
      pow(this->imag, 2)); // Calculate the magnitude of the complex number.
}

// Friend function to calculate the magnitude of a Complex number.
double mag(const Complex &complex) {
  return sqrt(pow(complex.real, 2) +
              pow(complex.imag,
                  2)); // Calculate the magnitude of a given complex number.
}

// Function to calculate the conjugate of a Complex number.
Complex Complex::conjugate() {
  Complex temp;
  temp.real = this->real;
  temp.imag = -this->imag; // Negate the imaginary part to find the conjugate.
  return temp;
}

// Friend function to calculate the conjugate of a Complex number.
Complex conjugate(const Complex &complex) {
  Complex temp;
  temp.real = complex.real;
  temp.imag = -complex.imag; // Negate the imaginary part to find the conjugate.
  return temp;
}

// Operator overloading for scalar multiplication from the right.
Complex Complex::operator*(const double scalar) {
  Complex temp;
  temp.real = scalar * this->real;
  temp.imag = scalar * this->imag;
  return temp;
}

// Friend function for scalar multiplication from the left.
Complex operator*(const double scalar, const Complex &complex) {
  Complex temp;
  temp.real = scalar * complex.real;
  temp.imag = scalar * complex.imag;
  return temp;
}

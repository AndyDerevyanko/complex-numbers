#include "complex.h"
#include <iomanip>

int main() {
  cout << setprecision(2) << fixed;

  Complex complex1;
  Complex complex2;

start:
  cout << "Enter the first complex number ..." << endl;
  cin >> complex1;
  cout << "Enter the second complex number ..." << endl;
  cin >> complex2;

  cout << "You entered the numbers ..." << endl;
  cout << "C1 = " << complex1 << endl;
  cout << "C2 = " << complex2 << endl;

  cout << endl;

  // Display the menu for user selection.
  cout << "1: Addition" << endl;
  cout << "2: Subtraction" << endl;
  cout << "3: Multiplication" << endl;
  cout << "4: Division" << endl;
  cout << "5: Magnitude" << endl;
  cout << "6: Conjugate" << endl;
  cout << "7. Scalar multiplication from the left" << endl;
  cout << "8: Scalar multiplication from the right" << endl;
  cout << "9: Quit" << endl << endl;
  cout << "Enter your selection: ";
  int selection;

  while (true) {
    cin >> selection;
    if (selection <= 9 && selection >= 1)
      break;
    else {
      cout << "Invalid selection, please enter a number from 1-9: " << endl;
    }
  }

  switch (selection) {
  case 1:
    cout << "C1 + C2 = " << complex1 + complex2 << endl
         << endl; // Perform addition and display the result.
    break;
  case 2:
    cout << "C1 - C2 = " << complex1 - complex2 << endl
         << endl; // Perform subtraction and display the result.
    break;
  case 3:
    cout << "C1 * C2 = " << complex1 * complex2 << endl
         << endl; // Perform multiplication and display the result.
    break;
  case 4:
    cout << "C1 / C2 = " << complex1 / complex2 << endl
         << endl; // Perform division and display the result.
    break;
  case 5:
    cout << "|C1|" << complex1.mag()
         << endl; // Calculate and display the magnitude of C1.
    cout << "|C2|" << complex2.mag() << endl
         << endl; // Calculate and display the magnitude of C2.
    break;
  case 6:
    cout << "The conjugate of C1 is " << complex1.conjugate()
         << endl; // Calculate and display the conjugate of C1.
    cout << "The conjugate of C2 is " << complex2.conjugate() << endl
         << endl; // Calculate and display the conjugate of C2.
    break;
  case 7: {
    cout << "Enter your scalar: ";
    double scalar;
    cin >> scalar;
    cout << scalar << " * C1"
         << " = " << scalar * complex1
         << endl; // Perform scalar multiplication from the left and display the
                  // result.
    cout << scalar << " * C2"
         << " = " << scalar * complex2 << endl
         << endl; // Perform scalar multiplication from the left and display the
                  // result.
    break;
  }
  case 8: {
    cout << "Enter your scalar: ";
    double scalar;
    cin >> scalar;
    cout << "C1 * " << scalar << " = " << complex1 * scalar
         << endl; // Perform scalar multiplication from the right and display
                  // the result.
    cout << "C2 * " << scalar << " = " << complex2 * scalar << endl
         << endl; // Perform scalar multiplication from the right and display
                  // the result.
    break;
  }
  case 9:
    cout << "Thank you for using this program!"
         << endl; // Display a farewell message.
    return 0;     // Quit the program.
  }

  cout << endl << endl;
  goto start; // Return to the start of the program to allow further
              // calculations.
}

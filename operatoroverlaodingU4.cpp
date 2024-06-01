#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload the + operator
    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to display the complex number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);

    Complex c3 = c1 + c2; // Using the overloaded + operator

    cout << "c1: ";
    c1.display();
    cout << "c2: ";
    c2.display();
    cout << "c3 (c1 + c2): ";
    c3.display();

    return 0;
}
/*
Output
c1: 3 + 4i
c2: 1 + 2i
c3 (c1 + c2): 4 + 6i
*/
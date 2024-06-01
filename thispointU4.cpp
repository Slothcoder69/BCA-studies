#include <iostream>

using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int length, int width) {
        // Use 'this' pointer to distinguish between class attributes and constructor parameters
        this->length = length;
        this->width = width;
    }

    // Function to set length
    void setLength(int length) {
        this->length = length;
    }

    // Function to set width
    void setWidth(int width) {
        this->width = width;
    }

    // Function to calculate area
    int area() {
        return this->length * this->width;
    }

    // Function to display the dimensions
    void display() {
        cout << "Length: " << this->length << ", Width: " << this->width << endl;
    }
};

int main() {
    // Create an object of Rectangle
    Rectangle rect(10, 5);

    // Display the initial dimensions
    rect.display();

    // Calculate and display the area
    cout << "Area: " << rect.area() << endl;

    // Modify the dimensions using setter methods
    rect.setLength(15);
    rect.setWidth(10);

    // Display the new dimensions
    rect.display();

    // Calculate and display the new area
    cout << "Area: " << rect.area() << endl;

    return 0;
}

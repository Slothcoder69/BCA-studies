#include <iostream>
#include <string>

using namespace std;

// Base class
class Vehicle {
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y) : brand(b), year(y) {}

    void showDetails() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

// Derived class
class Car : public Vehicle {
private:
    string model;

public:
    Car(string b, int y, string m) : Vehicle(b, y), model(m) {}

    void showCarDetails() {
        showDetails(); // Call the base class method
        cout << "Model: " << model << endl;
    }
};

int main() {
    Car myCar("Toyota", 2021, "Corolla");
    myCar.showCarDetails();

    return 0;
}
/*
Output:
Brand: Toyota, Year: 2021
Model: Corolla
*/
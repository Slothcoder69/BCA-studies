#include <iostream>

using namespace std;

int main() {
    int var = 10;    // A normal integer variable
    int *ptr;        // A pointer variable, with the same data type as var

    ptr = &var;      // Store the address of var in the pointer variable

    // Output the value of var
    cout << "Value of var: " << var << endl;

    // Output the address of var
    cout << "Address of var (&var): " << &var << endl;

    // Output the address stored in ptr
    cout << "Address stored in ptr: " << ptr << endl;

    // Output the value pointed to by ptr
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

    // Changing the value of var through the pointer
    *ptr = 20;
    cout << "Value of var after changing through ptr: " << var << endl;

    return 0;
}
/*
Value of var: 10
Address of var (&var): 0x61ff08
Address stored in ptr: 0x61ff08
Value pointed to by ptr (*ptr): 10
Value of var after changing through ptr: 20*/

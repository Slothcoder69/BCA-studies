#include <iostream>
using namespace std;

template<class T>
T addval(T a, T b) {
    T addition = a + b;
    return addition;
}

int main() {
    int a = 10, b = 20, total1;
    float m = 6.28, n = 8.34, total2; // corrected the variable name from 'toal2' to 'total2'
    
    total1 = addval(a, b);
    total2 = addval(m, n);
    
    cout << "The addition of two integer values is: " << total1 << endl;
    cout << "The addition of two float values is: " << total2 << endl;
    
    return 0; // main function should return an integer
}
/*
The addition of two integer values is: 30
The addition of two float values is: 14.62
*/

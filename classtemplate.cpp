#include <iostream>
using namespace std;

template<class T>
class greaternum {
    public:
    T n[3];
    greaternum(T first, T second, T third) {
        n[0] = first;
        n[1] = second;
        n[2] = third;
    }

    T getmax() {
        T maxval = n[0];
        if (n[1] > maxval) {
            maxval = n[1];
        }
        if (n[2] > maxval) {
            maxval = n[2];
        }
        return maxval;
    }
};

int main() {
    greaternum<int> obj1(80, 50, 100);
    cout << "The greater num is " << obj1.getmax() << endl;
    
    greaternum<float> obj2(80.3, 150.5, 100.6);
    cout << "The greater float number is " << obj2.getmax() << endl;
    
    return 0;
}

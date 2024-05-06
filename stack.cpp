#include <iostream>
using namespace std;
#define MAX 10

class Stack {
public:
    int top;
    int a[MAX];
    Stack() {
        top = -1; 
    }
    int push(int x);
    int pop();
    int isEmpty(); 
};

int Stack::push(int x) {
    if (top >= MAX) {
        cout << "STACK OVERFLOW";
        return 0;
    }
    else {
        a[++top] = x;
        cout << x << " pushed to stack\n";
        return 1;
    }
}

int Stack::pop() {
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--]; 
        return x;
    }
}

int main() {
    Stack s; 
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n"; 
    cout << "Top item is " << s.a[s.top]; 
    return 0;
}
/*
Output: 
10 pushed to stack
20 pushed to stack
30 pushed to stack
30 Popped from stack
Top item is 20
*/
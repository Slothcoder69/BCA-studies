#include <iostream>

using namespace std;

const int MAX_SIZE = 100; // Maximum size of the stack

class Stack {
private:
    int items[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool is_empty() {
        return top == -1;
    }

    bool is_full() {
        return top == MAX_SIZE - 1;
    }

    void push(int item) {
        if (!is_full()) {
            top++;
            items[top] = item;
        } else {
            cout << "Stack is full" << endl;
        }
    }

    int pop() {
        if (!is_empty()) {
            int poppedItem = items[top];
            top--;
            return poppedItem;
        } else {
            cout << "Stack is empty" << endl;
            return -1; // Assuming -1 indicates an empty stack
        }
    }

    int peek() {
        if (!is_empty()) {
            return items[top];
        } else {
            cout << "Stack is empty" << endl;
            return -1; // Assuming -1 indicates an empty stack
        }
    }

    int size() {
        return top + 1;
    }
};

// Example usage of the Stack class
int main() {
    Stack stack;

    // Push some elements onto the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Stack size: " << stack.size() << endl;
    cout << "Top element: " << stack.peek() << endl;

    // Pop elements from the stack
    cout << "Popped element: " << stack.pop() << endl;
    cout << "Popped element: " << stack.pop() << endl;
    cout << "Popped element: " << stack.pop() << endl;

    cout << "Stack size after popping: " << stack.size() << endl;

    return 0;
}
/*

output:
Stack size: 3
Top element: 3
Popped element: 3
Popped element: 2
Popped element: 1
Stack size after popping: 0
*/
#include <iostream>

using namespace std;

class MyException : public exception {
public:
  MyException(const string& message) : message_(message) {}

  const string& message() const { return message_; }

private:
  string message_;
};

int main() {
  try {
    throw MyException("This is my exception!");
  } catch (MyException& e) {
    cout << "Caught exception: " << e.message() << endl;
  }

  return 0;
}
/*Caught exception: This is my exception!*/
#include <iostream>

using namespace std;

class A {
private:
  int x;

public:
  int getX() { return x; };
  void setX(int x) { this->x = x; };
  friend void Foo(A &);
};

void Foo(A &a) { a.x = 0; }

int main() {
  A n1;
  n1.setX(5);
  cout << n1.getX() << endl;
  Foo(n1);
  cout << n1.getX() << endl;
  return 0;
}
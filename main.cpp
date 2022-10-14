#include <iostream>

using namespace std;

class nokta {
public:
  int x, y;
  void degerAta(int, int);
  void ekranaYaz() { cout << x << ", " << y << endl; }
};

void nokta::degerAta(int x, int y) {
  this->x = x;
  this->y = y;
}

int main() {
  nokta n1;
  n1.degerAta(5, 7);
  n1.ekranaYaz();

  return 0;
}
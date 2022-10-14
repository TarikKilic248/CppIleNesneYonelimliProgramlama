#include <iostream>

using namespace std;

class nokta {
private:
  int x;

public:
  int y;
  void degerAta(int, int);
  void ekranaYaz();
  bool baslangicdaMi();
};

void nokta::degerAta(int x, int y) {
  this->x = x;
  this->y = y;
}

void nokta::ekranaYaz() { cout << x << ", " << y << endl; }

bool nokta::baslangicdaMi() { return x == 0 && y == 0; }

int main() {
  nokta n1;
  n1.y = 10;
  n1.degerAta(5, 7);
  n1.ekranaYaz();

  return 0;
}
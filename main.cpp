#include <iostream>

using namespace std;

class nokta {
private:
  int x;
  int y;

public:
  int getX() { return x; };
  int getY() { return y; };

  void setX(int x) { this->x = x; };
  void setY(int y) { this->y = y; };

  void ekranaYaz();
  bool baslangicdaMi();
};

void nokta::ekranaYaz() { cout << x << ", " << y << endl; }

bool nokta::baslangicdaMi() { return x == 0 && y == 0; }

int main() {
  nokta n1;
  n1.y = 10;
  n1.degerAta(5, 7);
  n1.ekranaYaz();

  return 0;
}
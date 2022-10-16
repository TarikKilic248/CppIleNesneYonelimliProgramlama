#include <iostream>

using namespace std;

class Nokta {
private:
  int x;
  int y;

public:
  Nokta() {
    cout << "Parametresiz" << endl;
    x = 0;
    y = 0;
  };
  Nokta(int x, int y = 0) {
    cout << "Parametreli" << endl;
    this->x = x;
    this->y = y;
  }
  int getX() { return x; }
  int getY() { return y; }
  void setX(int x) { this->x = x; };
  void setY(int y) { this->y = y; };
  void ekranaYaz() { cout << x << ", " << y << endl; }
  bool baslangictaMi() { return x == 0 && y == 0; };
};

int main() {
  Nokta dizi[5] = {{1, 2}, {1}, {2, 3}};

  for (int i = 0; i < 5; i++) {
    cout << dizi[i].getX() << ", " << dizi[i].getY() << endl;
  }


  return 0;
}
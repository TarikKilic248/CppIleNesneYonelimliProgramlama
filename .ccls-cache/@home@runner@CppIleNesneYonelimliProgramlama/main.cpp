#include <iostream>

using namespace std;

class nokta {
public:
  int x, y;
  void degerAta(int x, int y) {
    this->x = x;
    this->y = y;
  }
  void ekranaYaz() { cout << x << ", " << y << endl; }
  bool baslangictaMi() {
    if (x == 0 && y == 0) {
      return true;
    } else {
      return false;
    }
  }
};

int main() {
  nokta n;
  n.degerAta(2, 7);
  n.ekranaYaz();

  nokta n2;
  n2.degerAta(0, 0);
  if (n2.baslangictaMi()) {
    cout << "n2 baslangic noktasında";
  }
}
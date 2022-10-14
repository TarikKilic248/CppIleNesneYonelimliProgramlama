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
  bool baslangictaMi() { return x == 0 && y == 0; }
};

int main() {
  nokta n;
  nokta n2;
  nokta *n3;
  n3 = &n2;
  n.degerAta(2, 7);
  n.ekranaYaz();

  n2.degerAta(0, 0);
  if (n2.baslangictaMi()) {
    cout << "n2 baslangic noktasında" << endl;
  }

  n2.degerAta(1, 0);

  cout << "n3 pointer ile yazılan değerler" << endl;
  n3->ekranaYaz();
}
#ifndef _NOKTA_
#define _NOKTA_
#include "Nokta.h"
#include <iostream>

using namespace std;

Nokta::Nokta() : t(0) {
  x = 0;
  y = 0;
  z = new int(5);
  // t=0; hatalı
  cout << "Parametrresiz kurucu" << x << " " << y << endl;
}

Nokta::Nokta(int x, int y = 8, int t = 0) : t(t) {
  this->x = x;
  this->y = y;
  // this->t = t; hatalı
  cout << "Parametreli kurucu" << x << " " << y << endl;
  z = new int(6);
}

Nokta::Nokta(const Nokta &n) : t(n.t) {
  x = n.x;
  y = n.y;
  z = new int(*n.z);
  cout << "Kopyalama Kurucusu" << x << " " << y << endl;
}

Nokta::~Nokta() {
  cout << "Yıkıcı calıştı " << x << " " << y << endl;
  // delere z;
}

int Nokta::getX() const {
  int _x = 2 * x;
  return x;
}

int Nokta::getY() const { return y; }

void Nokta::setX(int x) { this->x = x; }

void Nokta::setY(int _y) {
  if (_y < 5)
    y = _y;
  else
    y = 2;
}

void Nokta::ekranaYaz() { cout << x << ", " << y << endl; }
bool Nokta::baslangicdaMi() { return x == 0 && y == 0; }

#endif
#include <iostream>

using namespace std;

namespace programci {
int x = 15;
void Food() {
  int x = 5;
  cout << x << endl;
  ;
}
} // namespace programci

int x = 3;

void Boo() { cout << x << endl; }

int main() {
  cout << x<<endl;
  int x = 10;
  Boo();
  cout << programci::x << endl;
  programci::Food();
  return 0;
}
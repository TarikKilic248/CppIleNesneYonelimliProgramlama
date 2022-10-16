class Nokta {
private:
  int x, y;

public:
  const int t;
  int *z;
Nokta();
Nokta(int,int,int);
Nokta(const Nokta&);
~Nokta();

int getX()const;
int getY()const;

void setX(int);
void setY(int);

void ekranaYaz();
bool baslangicdaMi();
};
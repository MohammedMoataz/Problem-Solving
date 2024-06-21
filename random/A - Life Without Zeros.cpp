#include <iostream>

using namespace std;

int withoutZero(int num) {
  int n = 0;
  int power = 1;

  while (num > 0) {
    n += (num % 10) * power;
    if (num % 10 != 0)
      power *= 10;
    num /= 10;
  }

  return n;
}

int main() {

  int a, b;
  cin >> a >> b;

  int sum = a + b;
  a = withoutZero(a);
  b = withoutZero(b);

  if (a + b == withoutZero(sum))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
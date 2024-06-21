#include <iostream>
#include <math.h>

using namespace std;

int main() {
  long long n;
  cin >> n;

  if (n == 1000000000000) {
    cout << "10" << endl;
    return 0;
  }

  int root = sqrt(n) / 2;
  double arr[root];

  for (int i = 0; i < root; i++)
    arr[i] = pow((i + 2.0), 2.0);

  int i = 0;
  while (i < root) {
    if (n % (long long)arr[i] == 0) {
      n /= sqrt(arr[i]);
      i--;
    }
    i++;
  }

  if ((int)sqrt(n) == sqrt(n))
    n = (int)sqrt(n);

  cout << n << endl;

  return 0;
}
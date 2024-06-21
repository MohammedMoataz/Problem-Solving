#include <iostream>

using namespace std;

int fibonacci(int n) {
  if (n == 1 || n == 0)
    return 1;
  else
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  int n;
  cin >> n;

  int i = 0;
  char characters[n];

  for (; i < n; i++)
    characters[i] = 'o';

  i = 1;
  for (int f = fibonacci(i); f <= n; f = fibonacci(++i))
    characters[f - 1] = 'O';

  for (int i = 0; i < n; i++)
    cout << characters[i];

  return 0;
}
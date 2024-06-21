#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  string str = "qewrtyuiopkljmhngbfvdcxsaz";
  char arr[k];

  for (int i = 0; i < k; i++)
    arr[i] = str[i];

  for (int i = 0; i < n; i++)
    cout << arr[i % k];

  return 0;
}
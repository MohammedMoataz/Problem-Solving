#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  char c[n];
  int count = 0;

  for (int i = 0; i < n; i++) {
    cin >> c[i];

    if (c[i] == 'A')
      count++;
    else
      count--;
  }

  if (count > 0)
    cout << "Anton" << endl;
  else if (count < 0)
    cout << "Danik" << endl;
  else
    cout << "Friendship" << endl;
}

#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int counter = 0;

  int temp;
  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < 3; j++) {
      cin >> temp;

      if (temp == 1)
        count++;
    }

    if (count > 1)
      counter++;
  }

  cout << counter << endl;

  return 0;
}
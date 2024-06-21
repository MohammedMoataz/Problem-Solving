#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int sec[n];
  int temp[n] = {0};
  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      sec[i] = a[i] / 2;
      sum = sum + sec[i];

    } else {
      if (a[i] > 0) {

        sec[i] = (a[i] / 2) + 1;

        sum = sum + sec[i];
        temp[i] = 1;
      } else {
        sec[i] = (a[i] / 2);

        sum = sum + sec[i];
        temp[i] = 1;
      }
    }
  }
  if (sum == 0) {
    for (int i = 0; i < n; i++) {

      cout << sec[i] << endl;
    }
  } else if (sum > 0) {

    for (int i = 0; i < n; i++) {

      if (temp[i] == 1) {

        sec[i] = sec[i] - 1;
        sum = sum - 1;
        if (sum == 0) {
          for (int i = 0; i < n; i++) {
            cout << sec[i] << endl;
          }
          return 0;
        }
      }
    }
  }

  return 0;
}

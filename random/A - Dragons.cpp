#include <iostream>

using namespace std;

int main() {
  int s, n;
  cin >> s >> n;

  int arr[n][2];
  for (int i = 0; i < n; i++)
    cin >> arr[i][0] >> arr[i][1];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (arr[j][0] > arr[j + 1][0]) {
        int x = arr[j][0];
        int y = arr[j][1];
        arr[j][0] = arr[j + 1][0];
        arr[j][1] = arr[j + 1][1];
        arr[j + 1][0] = x;
        arr[j + 1][1] = y;
      }
    }
  }

  bool next = true;
  for (int i = 0; i < n && next; i++)
    (s > arr[i][0]) ? s += arr[i][1] : next = false;

  (next) ? cout << "YES" << endl : cout << "NO" << endl;

  return 0;
}

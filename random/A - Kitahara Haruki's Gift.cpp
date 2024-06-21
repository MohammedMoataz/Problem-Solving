#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int count1 = 0;
  int count2 = 0;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];

    if (arr[i] == 200)
      count2++;
    else
      count1++;
  }
  if (count1 == 2 && count2 == 1) {
    cout << "YES" << endl;

  } else if (((count1 * 100) + (count2 * 200)) % 2 != 0) {

    cout << "NO" << endl;

  } else if (count1 % 2 != 0) {
    cout << "NO" << endl;

  } else if (count2 % 2 == 0 && count1 == 0 ||
             (count1 % 2 == 0 && count2 == 0)) {
    cout << "YES" << endl;
  } else if (count2 % 2 != 0 && count1 == 0) {
    cout << "NO" << endl;
  } else {

    cout << "YES" << endl;
  }
  return 0;
}

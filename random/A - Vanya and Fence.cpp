#include <iostream>

using namespace std;

int main() {

  int n, h;
  cin >> n >> h;

  int arr[n];
  int count = 0;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] > h)
      count += 2;
    else
      count++;
  }

  cout << count;

  return 0;
}
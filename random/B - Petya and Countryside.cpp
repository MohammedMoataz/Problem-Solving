#include <iostream>

using namespace std;

int countRight(int *arr, int l, int h) {
  int count = 1;
  for (int i = l; i < h && arr[i] >= arr[i + 1]; i++)
    count++;

  return count;
}

int countLeft(int *arr, int h, int l) {
  int count = 0;
  for (int i = h; i > l && arr[i] >= arr[i - 1]; i--)
    count++;

  return count;
}

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int max = 0;
  for (int i = 0; i < n; i++) {
    int leader = countRight(arr, i, n - 1) + countLeft(arr, i, 0);

    if (max < leader)
      max = leader;
  }

  cout << max << endl;

  return 0;
}
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  int q;
  cin >> q;
  int price[q];

  for (int i = 0; i < q; i++) {
    int n, k;
    cin >> n >> k;

    long long int arr[n];
    for (int j = 0; j < n; j++)
      cin >> arr[j];

    long long int min = arr[0], max = arr[0];

    for (int j = 1; j < n; j++) {
      if (min > arr[j])
        min = arr[j];

      if (max < arr[j])
        max = arr[j];
    }

    if (abs(min + k - max) <= k)
      price[i] = min + k;
    else
      price[i] = -1;
  }

  for (int i = 0; i < q; i++)
    cout << price[i] << endl;

  return 0;
}
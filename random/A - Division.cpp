#include <iostream>

using namespace std;

int main() {
  int test;
  cin >> test;

  for (int i = 0; i < test; i++) {
    int rate;
    cin >> rate;

    if (rate >= 1900) {
      cout << "Division " << 1 << "\n";
    } else if (rate < 1900 && rate >= 1600) {
      cout << "Division " << 2 << "\n";
    } else if (rate < 1600 && rate >= 1400) {
      cout << "Division " << 3 << "\n";
    } else if (rate < 1400) {
      cout << "Division " << 4 << "\n";
    }
  }

  return 0;
}
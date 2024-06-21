#include <iostream>
#include <string.h>

using namespace std;

int main() {
  char password[100];
  cin >> password;

  bool cor[5];
  for (int i = 0; i < 4; i++)
    cor[i] = false;

  if (strlen(password) > 4)
    cor[0] = true;

  for (unsigned int i = 0; i < strlen(password) - 1; i++) {
    if (password[i] >= 65 && password[i] <= 90) { //  a ... z
      cor[1] = true;
    } else if (password[i] >= 97 && password[i] <= 122) { //  A ... Z
      cor[2] = true;
    } else if (password[i] >= 48 && password[i] <= 57) { //  0 .. 9
      cor[3] = true;
    }
  }

  bool print = false;
  for (int i = 0; i < 4; i++) {
    if (cor[i]) {
      print = true;
    } else {
      print = false;
      break;
    }
  }

  if (print)
    cout << "Correct" << endl;
  else
    cout << "Too weak" << endl;

  return 0;
}
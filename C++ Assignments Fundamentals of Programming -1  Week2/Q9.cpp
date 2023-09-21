#include <iostream>
using namespace std;

int main() {
  char n;

  cout << "Enter any character: ";
  cin >> n;

  if (isalpha(n)) {
    cout << n << " is an Letter" << endl;
  } else if (isdigit(n)) {
    cout << n << " is a digit." << endl;
  } else {
    cout << n << " is a special character." << endl;
  }

  return 0;
}
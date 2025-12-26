#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "Enter your score : ";
  cin >> n;

  if (n >= 40) {
    cout << "You pass" << endl;
  } else {
    cout << "You fail" << endl;
  }

  (n >= 50) ? cout << "PASS" : cout << "FAIL" << endl;

  return 0;
}
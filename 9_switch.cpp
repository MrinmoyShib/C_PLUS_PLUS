#include <bits/stdc++.h>
using namespace std;

int main() {
  int month;
  cout << "Enter the number of the month :";
  cin >> month;

  switch (month) {
  case 1:
    cout << "January";
    break;
  case 2:
    cout << "February";
    break;
  case 3:
    cout << "March";
    break;
  case 4:
    cout << "April";
    break;
  case 5:
    cout << "May";
    break;
  default:
    cout << "Enter between 1-5";
  }
  return 0;
}
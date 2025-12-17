#include <bits/stdc++.h>
using namespace std;

vector<int> vec;
int n;

int Lower_Bound(int val) {
  int low = 0, high = n - 1;

  int ans = n;

  while (low <= high) {
    int mid = (low + high) / 2;

    if (vec[mid] > val) {
      ans = mid;
      high = mid - 1;
    }

    else {
      low = mid + 1;
    }
  }

  return ans;
}

int main() {
  int x, y;

  cout << "Enter the Array size: ";
  cin >> n;

  cout << "Enter the array (must be sorted): ";
  for (int i = 0; i < n; i++) {
    cin >> x;
    vec.push_back(x);
  }

  cout << "Enter search element: ";
  cin >> y;

  // Calling lower bound
  int result = Lower_Bound(y);

  // Print resulting index
  cout << "Lower bound index = " << result;

  return 0;
}

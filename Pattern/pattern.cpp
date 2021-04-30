#include <bits/stdc++.h>
using namespace std;
 
void printPattern(int r) {
 
  float dist;
  for (int i = 0; i <= 2 * r; i++) {
    // change below line to pass all test cases
    for (int j = 0; j <= r; j++) {
      // change below line to pass all test cases
      dist = sqrt((i - r) * (i - r) + (j + r) * (j + r));
      if (dist > r - 0.5 && dist < r + 0.5)
        cout << "*";
      else
        cout << " ";     
    }
    cout << "\n";
  }
}
 
int main() {
  int r;
  cin >> r;
  // change below line to pass all test cases
  printPattern();
  return 0;
}
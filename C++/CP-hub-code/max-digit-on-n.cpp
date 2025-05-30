#include<bits/stdc++.h>
using namespace std;

int32_t main() {

  int n;
  cin >> n;
  int mx = 0;
  while(n > 9) {
    mx = max(mx, n %= 10); // digit
    n /= 10;
  }
  mx = max(mx, n);
  cout << mx << '\n';
  
  return 0;
}
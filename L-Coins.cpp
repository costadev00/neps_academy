#include<bits/stdc++.h>

using namespace std;

int memo[1001][1001];

int troco(int s, int n) {
  if (s == 0) {
    return 0;
  }
  if (n == 0) {
    return INT_MAX;
  }
  if (memo[s][n] != -1) {
    return memo[s][n];
  }
  if (s >= n) {
    memo[s][n] = min(troco(s - n, n) + 1, troco(s, n - 1));
  } else {
    memo[s][n] = troco(s, n - 1);
  }
  return memo[s][n];
}

int main() {
  int n, s;
  cin >> n >> s;
  memset(memo, -1, sizeof(memo));
  cout << troco(s, n) << endl;
  return 0;
}

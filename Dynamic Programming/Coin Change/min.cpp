/** 
 *    Returns the minimum number of coins that you need to make up an amount, inf otherwise (typically amount + 1)
 *    Space Complexity: O(Amount)
 *    Time Complexity: (n * Amount)
 *    created: 23.11.2020 20:36:29
**/ 
#include<bits/stdc++.h>

using namespace std;

T solve(vector<T> &coins, T amount) {
  int n = (int) coins.size();
  vector<int> dp(t + 1, amount + 1);
  vector<int> construct(t + 1, -1); // to print the coins used
  dp[0] = 0;
  for (int i = 1; i <= t; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i - a[j] >= 0 && dp[i - a[j]] + 1 < dp[i]) {
        dp[i] = dp[i - a[j]] + 1;
        // store the first coin used to make sum i
        construct[i] = a[j];
      } 
    }
  }
}

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, t;
  cin >> n >> t;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  vector<int> dp(t + 1, t + 1);
  vector<int> construct(t + 1, -1); // print the coins used;
  dp[0] = 0;
  for (int i = 1; i <= t; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i - a[j] >= 0 && dp[i - a[j]] + 1 < dp[i]) {
        dp[i] = dp[i - a[j]] + 1;
        // store the first coin used to make sum i
        construct[i] = a[j];
      } 
    }
  }
  cout << dp[t] << '\n';
  // printing the solution
  while (t > 0) {
    cout << construct[t] << ' ';
    t -= construct[t];
  }
  return 0;
}
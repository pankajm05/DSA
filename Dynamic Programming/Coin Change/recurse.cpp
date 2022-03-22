/** 
 *    Returns the minimum number of coins that you need to make up an amount, inf otherwise (typically amount + 1)
 *    Space Complexity: O(n)
 *    Time Complexity: (2^n)
**/ 
#include<bits/stdc++.h>

using namespace std;

int inf = (int) 1e9; 

int solve(vector<int> &coins, int n) {
  if (n < 0) {
    return inf;
  }
  if (n == 0) {
    return 0;
  }
  int ans = inf;
  for (int c : coins) {
    ans = min(ans, solve(coins, n - c) + 1);
  }
  return ans;
}

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, t;
  cin >> n >> t;
  inf = t + 1;
  vector<int> coins(n);
  for (int i = 0; i < n; ++i) {
    cin >> coins[i];
  } 
  cout << solve(coins, t);
  return 0;
}
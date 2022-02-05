/** 
 *    Returns the minimum number of coins that you need to make up an amount, inf otherwise
 *    Space Complexity: O(Amount)
 *    Time Complexity: (n * Amount)
 *    created: 23.11.2020 20:36:29
**/

constexpr ... inf = ...; // some large value, don't forget to define it

template<typename T>
T solve(vector<T> &coins, vector<T> &dp, T n) {
  if (n < 0) {
    return inf;
  }
  if (n == 0) {
    return 0;
  }
  if (dp[n] != -1) {
    return dp[n];
  }
  T ans = inf;
  for (T &c : coins) {
    ans = min(ans, solve(coins, dp, n - c) + 1);
  }
  dp[n] = ans;
  return dp[n];
}
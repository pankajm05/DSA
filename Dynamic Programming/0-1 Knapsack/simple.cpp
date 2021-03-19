template<typename T>
T solve(int n, int cap, vector<T>& v, vector<T>& w) {
  vector<vector<T>> dp(n + 1, vector<T>(cap + 1, (T) 0));
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= cap; ++j) {
      if (w[i - 1] <= j) {
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);   
      } else {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  return dp[n][cap];
}

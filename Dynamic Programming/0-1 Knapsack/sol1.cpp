// O(N) space
template<typename T>
T solve(int n, int cap, vector<T>& v, vector<T>& w) {
  vector<T> dp(cap + 1);
  for (int i = 0; i < n; ++i) {
    for (int j = cap; j >= w[i]; --j) {
      dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
    }
  }
  return dp[cap];  
}

/**
 * cap: Knapsack Capacity
 * w: weight of each item
 * v: values (profit) of each item
 * dp[i]: maximum possible profit using n items for knapsack of size cap
 * Time Complexity: O(n^2)
 * Space Complexity: O(n)
**/
template<typename T>
T solve(int n, T cap, vector<T>& v, vector<T>& w) {
  vector<T> dp(cap + 1, T());
  for (int i = 0; i < n; ++i) {
    for (int j = cap; j >= w[i]; --j) {
      dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
    }
  }
  return dp[cap];  
}

/** 
 *    author:  pankaj_m05
 *    created: 07.10.2020 16:06:57
**/ 
#include<bits/stdc++.h>

using namespace std;

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, t;
  cin >> n >> t;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
  	cin >> a[i];
  }
  vector<int> dp(t + 1, 0LL);
  dp[0] = 1;
  for (int i = 0; i < n; ++i) {
  	for (int j = a[i]; j <= t; ++j) {
  		dp[j] += dp[j - a[i]];
  	}
  }
  cout << dp[t] << '\n';
  return 0;
}
/** 
 *    author:  pankaj_m05
 *    created: 23.11.2020 19:39:03
**/ 
#include<bits/stdc++.h>

using namespace std;

constexpr int inf = 1e9; 
vector<int> coins;

int solve(int n) {
	if (n < 0) {
		return inf;
	}
	if (n == 0) {
		return 0;
	}
	int ans = inf;
	for (int c : coins) {
		ans = min(ans, solve(n - c) + 1);
	}
	return ans;
}

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, t;
  cin >> n >> t;
  coins.resize(n);
  for (int i = 0; i < n; ++i) {
  	cin >> coins[i];
  } 
  cout << solve(t);
  return 0;
}
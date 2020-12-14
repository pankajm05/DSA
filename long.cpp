/**
 *    author: pankaj_m05	
**/
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define INF LLONG_MAX
#define NINF LLONG_MIN
#define gc getchar_unlocked
#define sz(c) int((c).size())
#define sortall(x) sort(all(x))
#define pc(c) putchar_unlocked(c)         
#define PI 3.1415926535897932384626     
#define all(c) (c).begin(), (c).end()
#define clr(x) memset(x, 0, sizeof(x))  
#define MAX32 numeric_limits< int >::max() 
#define MIN32 numeric_limits< int >::min()
#define rall(c) (c).rbegin(), (c).rend()
#define deb(x) cerr << #x << " = " << x << endl
#define forn(i, n) for(int i = 0; i < (int)n; ++i)
#define for1(i, n) for(int i = 1; i <= (int) n; ++i)
#define ford(i, n) for(int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, l, r) for(int i = (int)(l); i < (int)(r); ++i)
#define tr(c, it) for(typeof(c).begin() it = c.begin(); it != c.end(); it++)
#define deb2(x, y) cerr << #x << " = " << x << "," << #y << " = " << y << endl

using namespace std;

typedef long long ll;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef vector< ll > vill;
typedef pair < int, int > pi;
typedef unsigned long long int ull;

const int mod = 1e9 + 7;
int dx4[4] = {0, 0, -1, 1}, dy4[4] = {-1, 1, 0, 0};
int dx8[8] = {0, 0, -1, 1, -1, -1, 1, 1}, dy8[8] = {-1, 1, 0, 0, -1, 1, -1, 1};

ll binpow(ll base, ll exp) {
  base %= mod;
  ll res = 1;
  while (exp > 0) {
    if (exp & 1)
      res = (res * base) % mod;
    base = (base * base) % mod;
    exp >>= 1;
  }
	return res;
}

void testcase() {
	// welcome      
}

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.precision(10);
  cout << fixed;
  int tt = 1;
  cin >> tt;
  while(tt--) {
  	testcase();
  }
  return 0;
}

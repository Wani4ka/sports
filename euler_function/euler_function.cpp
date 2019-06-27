#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define pb push_back
#define F first
#define S second

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #else
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
  #endif // LOCAL
  int n;
  cin >> n;
  int ans = n;
  for (int d = 2; d*d <= n; ++d) {
    if (n % d == 0) ans -= ans / d;
    while (n % d == 0)
      n /= d;
  }
  if (n > 1) ans -= ans / n;
  cout << ans << endl;
  return 0;
}

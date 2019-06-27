#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define pb push_back
#define F first
#define S second

// Дано число n. Вывести все простые числа от 2 до n включительно.

const int N = 1e7;

int lp[N+1];
vector<int> pr;

void calc() {
  for (int i = 2; i <= N; ++i) {
    if (!lp[i]) lp[i] = i, pr.pb(i);
    for (int j = 0; j < pr.size() && pr[j] <= lp[i] && pr[j]*i <= N; ++j)
      lp[i * pr[j]] = pr[j];
  }
}

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
  calc();
  int n;
  cin >> n;
  for (int i = 0; i < pr.size() && pr[i] <= n; ++i)
    cout << pr[i] << " ";
  cout << endl;
  return 0;
}

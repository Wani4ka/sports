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

bool sost[N];

void calc() {
  sost[0] = sost[1] = 1;
  for (int i = 3; i*i <= N; i += 2) {
    if (!sost[i])
      for (int j = i*i; j <= N; j += i)
        sost[j] = 1;
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
  for (int i = 2; i <= n; ++i)
    if (!sost[i] && (i % 2 || i == 2)) cout << i << " ";
  cout << endl;
  return 0;
}

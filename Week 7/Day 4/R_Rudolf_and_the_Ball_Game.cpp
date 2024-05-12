#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
  int n, m, x;
  cin >> n >> m >> x;

  vector<int> vis(n + 1, 0);
  vis[x - 1] = 1;
  while (m--) {
    int d;
    cin >> d;
    char c;
    cin >> c;
    if (c == '?') {
      vector<int> q;
      for (int i = 0; i < n; i++) {
        if (vis[i]) {
          q.push_back(i);
          vis[i] = 0;
        }
      }
      for (int i : q) {
        vis[(i + d) % n] = 1;
        vis[((i - d) % n + n) % n] = 1;
      }
    } else if (c == '0') {
      vector<int> q;
      for (int i = 0; i < n; i++) {
        if (vis[i]) {
          q.push_back(i);
          vis[i] = 0;
        }
      }
      for (int i : q) {
        vis[(i + d) % n] = 1;
      }
    } else {
      vector<int> q;
      for (int i = 0; i < n; i++) {
        if (vis[i]) {
          q.push_back(i);
          vis[i] = 0;
        }
      }
      for (int i : q) {
        vis[((i - d) % n + n) % n] = 1;
      }
    }
  }

  int ans = 0;
  for (int i = 0; i < n + 1; i++) {
    ans += (vis[i] == 1);
  }
  cout << ans << endl;
  for (int i = 0; i < n; i++) {
    if (vis[i])
      cout << i + 1 << " ";
  }
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  cin >> t;
  while (t--) {

    solve();
  }
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;

ll N;
// -----------------------------
ll check(ll n) {
  return n*(n+1)/2;
}
// -----------------------------
void bs(ll x) {
  if (x <= 1) {
    if (x == 1) cout << 1 << endl;
    return;
  }

  ll ok=1, ng=x;
  while(ok+1 != ng) {
    ll md = (ok+ng)/2;
    if (check(md) < x) ok = md;
    else ng = md;
  }
  cout << ng << endl;
  bs(x-ng);
}
// -----------------------------
void _main() {
  cin >> N;
  bs(N);
}
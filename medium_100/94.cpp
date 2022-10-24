#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a) // for(auto &x : vec)
#define all(x) (x).begin(),(x).end()
#define all_arr(x) begin(x), end(x)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

ll A, B, X;
//---------------------------------------------------------------------------------------------------
ll check(ll x) {
  ll dx = to_string(x).length();
  return A * x + B * dx;
}
//---------------------------------------------------------------------------------------------------
void _main() {
  cin >> A >> B >> X;
  ll ok = 0, ng = 1000000001;
  while (ok + 1 != ng) {
    ll md = (ok + ng) / 2;
    if (check(md) <= X) ok = md;
    else ng = md;
  }
  cout << ok << endl;
}
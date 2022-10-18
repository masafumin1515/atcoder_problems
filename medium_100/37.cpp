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

int N, H[101];
// f(L, R) := 区間[L,R)を全て0にするために必要な回数を計算する
//---------------------------------------------------------------------------------------------------
int ans = 0;
void f(int L, int R) {
  if (L >= R) return;

  int mi = INF;
  rep(i, L, R) chmin(mi, H[i]);

  ans += mi;
  rep(i, L, R) H[i] -= mi;

  vector<int> zero;
  zero.push_back(-1);
  rep(i, L, R) if(H[i] == 0) zero.push_back(i);
  zero.push_back(R);

  int n = zero.size();
  rep(i, 0, n - 1) f(zero[i] + 1, zero[i + 1]);
}
//---------------------------------------------------------------------------------------------------
void _main() {
  cin >> N;
  rep(i, 0, N) cin >> H[i];

  f(0, N);
  cout << ans << endl;
}
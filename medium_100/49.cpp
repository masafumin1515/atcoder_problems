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
typedef long long ll;

int N, A[101010];
ll ans;
//---------------------------------------------------------------------------------------------------
void _main() {
  cin >> N;
  rep(i, 0, N) cin >> A[i];

  vector<int> v;
  map<int, int> cnt;
  rep(i, 0, N) {
    cnt[A[i]]++;
    if (cnt[A[i]] == 2) cnt[A[i]] = 0, v.push_back(A[i]);
  }
  sort(all(v), greater<int>());

  ans = 0;
  if (2 <= v.size()) ans = 1 * v[0] * v[1];
  cout << ans << endl;
}
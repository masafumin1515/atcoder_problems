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

string S;
int N;
int dp[33][101010];
int ans[101010];
//---------------------------------------------------------------------------------------------------
void _main() {
  cin >> S;
  N = S.length();

  rep(i, 0, N) {
    if (S[i] == 'R') dp[0][i] = i + 1;
    else dp[0][i] = i - 1;
  }

  rep(p, 0, 32) rep(i, 0, N) dp[p + 1][i] = dp[p][dp[p][i]];

  rep(i, 0, N) ans[dp[32][i]]++;
  rep(i, 0, N) {
    if (i) printf(" ");
    printf("%d", ans[i]);
  }
  printf("\n");
}
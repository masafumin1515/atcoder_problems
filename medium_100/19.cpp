#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }

int N,num_of_balls[3]={},dp[4][3001]={}; // i番目までのボールでj個にできる組み合わせの数
// -------------------------------------
void _main() {
  rep(i,0,3) cin >> num_of_balls[i];
  cin >> N;
  dp[0][0] = 1;
  rep(i,0,3) {
    rep(j,0,N+1) {
      dp[i+1][j] = dp[i][j]; // i番目のボールを選ばない
      if (j-num_of_balls[i] >= 0) dp[i+1][j] += dp[i+1][j-num_of_balls[i]]; // i番目のボールを1個以上選ぶ
    }
  }
  cout << dp[3][N] << endl;
}
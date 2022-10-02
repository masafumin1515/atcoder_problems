#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int X;
int A[6] = {100,101,102,103,104,105};
bool dp[7][100010];
// -------------
void _main() {
  cin >> X;

  dp[0][0] = 1;
  rep(j,1,X+1) dp[0][j] = 0;

  rep(i,0,6) {
    rep(j,0,X+1) {
      dp[i+1][j] = dp[i][j]; // 0個選択
      if ( j-A[i] >= 0 ) dp[i+1][j] = max(dp[i+1][j], dp[i+1][j-A[i]]); // 0個選択 or 1個以上選択
    }
  }

  cout << dp[6][X] << endl;
}
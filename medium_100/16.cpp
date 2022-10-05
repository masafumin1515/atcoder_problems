#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }

int N, a[100]={}, ans;
bool dp[110][10010]={}; // i番目までの数でjを表せるか
//-----------------------
void _main() {
  cin >> N;
  rep(i,0,N) cin >> a[i];
  dp[0][0]=1;
  rep(i,0,N) {
    rep(j,0,10010) {
      dp[i+1][j]=dp[i][j];
      if (j-a[i]>=0) chmax(dp[i+1][j], dp[i][j-a[i]]);
    }
  }
  ans=0;
  rrep(j,10010,0) if (dp[N][j] && (j%10 != 0)) chmax(ans,j);
  cout << ans << endl;
}
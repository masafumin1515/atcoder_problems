#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main() {
  string S; 
  cin >> S;
  int N; 
  N = S.length();

  vector<vector<int> > dp(33,vector<int>(N)); // dp[p][i] := i番目のマスから2^p回移動した先のマス。最初にi番目いた人の移動記録。
  rep(i, 0, N) {
    if (S[i] == 'R') dp[0][i] = i + 1; // i番目のマスからi回移動した時のマスはi+1
    else dp[0][i] = i - 1;
  }
  rep(p, 0, 32) rep(i, 0, N) dp[p + 1][i] = dp[p][dp[p][i]]; // ダブリング

  vector<int> ans(N);
  rep(i, 0, N) ans[dp[32][i]]++;
  rep(i, 0, N) {
    cout << ans[i] << ' ';
  }
  cout << endl;
}
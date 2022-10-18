#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all_arr(x) begin(x), end(x)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int N,M,ans;
void _main() {
  cin >> N >> M;
  vector<int> X(M);
  rep(i,0,M) cin >> X[i];
  sort(all_arr(X));

  vector<int> diff(M-1);
  rep(i,0,M-1) diff[i] = X[i+1] - X[i];
  sort(all_arr(diff));

  ans=0;
  rep(i,0,M-N) ans += diff[i];

  cout << ans << endl;
}
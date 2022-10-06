#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all_arr(x) begin(x), end(x)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;

int N,K,a[200010],cnt=0,ans=0;
// ---------------------------
void _main() {
  cin >> N >> K;
  rep(i,0,200010) a[i] = INF;
  rep(i,1,N+1) {
    int ai;
    cin >> ai;
    if (a[ai] == INF) {
      a[ai]=1; 
      ++cnt;
    } else {
      ++a[ai];
    }
  }
  sort(all_arr(a));
  if (cnt-K > 0) rep(i,0,cnt-K) ans += a[i];
  cout << ans << endl;
}
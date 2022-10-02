#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;

ll N, ans=1, MOD=1000000007;
// ---------------
void _main() {
  cin >> N;

  rep(i,1,N+1) {
    ans *= i;
    if ( ans >= MOD ) ans %= MOD;
  }

  cout << ans << endl;
}
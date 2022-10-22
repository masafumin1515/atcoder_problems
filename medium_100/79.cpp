#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;

int N,M,pos_arrange,divisor=1000000007;
ll dog_arrange,cat_arrange,ans;
// --------------------------
void _main() {
  cin >> N >> M;
  if (abs(N-M) > 1) ans = 0;
  else {
    dog_arrange=1; cat_arrange=1; pos_arrange=0;
    rep(i,1,N+1) {
      dog_arrange *= i;
      dog_arrange %= divisor;
    }
    rep(i,1,M+1) {
      cat_arrange *= i;
      cat_arrange %= divisor;
    }
    pos_arrange = abs(N-M)%2 ? 1 : 2;
    ans = (dog_arrange*cat_arrange*pos_arrange)%divisor;
  }
  cout << ans << endl;
}
#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int N,M,sum,ans;
int T[10010], P[110], X[110];
// ---------------------
void _main() {
  cin >> N;
  rep(i,0,N) cin >> T[i];
  cin >> M;
  rep(i,0,M) cin >> P[i] >> X[i];

  sum = 0;
  rep(i,0,N) sum += T[i];

  rep(i,0,M) {
    ans = sum - T[P[i] - 1] + X[i];
    cout << ans << endl;
  }
}
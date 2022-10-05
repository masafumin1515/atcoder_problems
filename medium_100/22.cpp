#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int N, K;
double ans=0.0;
// -------------------------
void _main() {
  cin >> N >> K;

  rep(i,1,N+1) {
    if (i >= K) {
      ans += 1.0/N;
    } else {
      int cnt=0;
      while(i*pow(2,cnt) < K) ++cnt;
      ans += (1.0/N)*pow(0.5,cnt);
    }
  }

  cout << fixed << setprecision(10) << ans << endl;
}
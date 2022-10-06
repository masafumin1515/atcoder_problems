#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }

int N,K,p[201010];
double ans,exp_v[201010]={};
// --------------------------
void _main() {
  cin >> N >> K;
  rep(i,0,N) cin >> p[i];
  rep(i,0,N) exp_v[i] = (1.0 + p[i]) * 0.5;
  double exp_vi=0.0;
  rep(i,0,K) exp_vi += exp_v[i];
  ans=exp_vi;
  rep(i,K,N) {
    exp_vi += (exp_v[i] - exp_v[i-K]);
    chmax(ans,exp_vi);
  }
  cout << fixed << setprecision(12) << ans << endl;
}
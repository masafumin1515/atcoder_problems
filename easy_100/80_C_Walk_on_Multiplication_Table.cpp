#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

ll N,sqrt_num;
ll ans=INFL;
// ------------------
void _main() {
  cin >> N;
  sqrt_num = (ll)sqrt(N);
  rep(i,1,sqrt_num+1) if (N % i == 0) chmin(ans, (N / i) - 2 + i);
  cout << ans << endl;
}
#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;

int N,M;
ll ans;
// -------------------------
void _main() {
  cin >> N >> M;
  priority_queue<int> a;
  rep(i,0,N) {
    int a_i; cin >> a_i;
    a.push(a_i);
  }
  rep(i,0,M) {
    int top = a.top();
    a.pop();
    a.push((int)(top/2));
  }

  ans=0;
  rep(i,0,N) {
    ans+=a.top();
    a.pop();
  }

  cout << ans << endl;
}
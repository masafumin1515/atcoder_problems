#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int N,ans;
// ---------------------------------
void _main() {
  cin >> N;
  map<int, int> cnt;
  rep(i,0,N) {
    int a; cin >> a;
    ++cnt[a];
  }

  for(pair<int, int> p : cnt) {
    if (p.first > p.second) ans += p.second;
    else if (p.first < p.second) ans += p.second - p.first;
  }

  cout << ans << endl;
}
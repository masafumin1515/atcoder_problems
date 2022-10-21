#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all_arr(x) begin(x), end(x)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int N,M,islands[201010]={};
string ans;
// --------------------------------------------
void _main() {
  cin >> N >> M;
  rep(i,0,M) {
    int a,b;
    cin >> a >> b;
    if (a == 1) ++islands[b];
    if (b == N) ++islands[a];
  }
  sort(all_arr(islands),greater<int>());

  ans="IMPOSSIBLE";
  if (islands[0] > 1) ans="POSSIBLE";
  cout << ans << endl;
}
#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all_arr(x) begin(x), end(x)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int cnt[3];
string S,ans;
// --------------------------------------
void _main() {
  cin >> S;
  rep(i,0,(int)S.length()) {
    if (S[i] == 'a') ++cnt[0];
    else if (S[i] == 'b') ++cnt[1];
    else if (S[i] == 'c') ++cnt[2];
  }
  sort(all_arr(cnt));

  ans="NO";
  if (cnt[2] - cnt[0] < 2) ans="YES";

  cout << ans << endl;
}
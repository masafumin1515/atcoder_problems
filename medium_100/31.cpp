#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int N,a[101010],cnt_2=0,cnt_4=0;
string ans;
// --------------------
void _main() {
  cin >> N;
  rep(i,0,N) cin >> a[i];
  rep(i,0,N) {
    if (a[i]%4 == 0) ++cnt_4;
    else if (a[i]%2 == 0) ++cnt_2;
  }
  ans="No";
  if ((cnt_4 + (cnt_2/2)) >= N/2) ans="Yes";
  cout << ans << endl;
}
#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int N, dis=0, interval=0, t[100010]={}, x[100010]={}, y[100010]={};
string ans;
// ---------------------------------------------
void _main() {
  cin >> N;
  rep(i,1,N+1) cin >> t[i] >> x[i] >> y[i];
  rep(i,0,N) {
    dis = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);
    interval = t[i+1]-t[i];
    ans = "No";
    if (interval == dis) ans = "Yes";
    else if ((interval > dis) && (( interval - dis ) % 2 == 0)) ans = "Yes";
    if (ans == "No") break;
  }
  cout << ans << endl;
}
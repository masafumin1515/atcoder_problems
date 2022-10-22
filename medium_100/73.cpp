#include<bits/stdc++.h>
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;

ll a,b,c;
string ans;
// ----------------------
void _main() {
  cin >> a >> b >> c;
  ans = "No";
  if ((c-a-b > 0) && (4*a*b < (c-a-b)*(c-a-b))) ans="Yes";
  cout << ans << endl;
}
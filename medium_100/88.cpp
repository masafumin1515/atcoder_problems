#include<bits/stdc++.h>
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;

ll x,divisor,r;
// -------------------
void _main() {
  cin >> x;
  divisor = x/11;
  r = x%11;
  if (!r) 
    cout << 2*divisor << endl;
  else {
    if (11*(divisor+1) - 5 >= x) cout << 2*(divisor+1)-1 << endl;
    else cout << 2*(divisor+1) << endl;
  }
}
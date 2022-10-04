#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }

int ans=0;
string S,even_s_e1,even_s_e2;
// ------------------
void _main() {
  cin >> S;

  rep(i, 1, (int)(S.length()/2)) {
    even_s_e1 = S.substr(0, i);
    even_s_e2 = S.substr(i, i);
    if (even_s_e1 == even_s_e2) chmax(ans, (int)(even_s_e1.length() * 2 ));
  }

  cout << ans << endl;
}
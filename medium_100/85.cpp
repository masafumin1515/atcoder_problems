#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

string S,ans;
// ------------------------
void _main() {
  cin >> S;
  int n = S.size();
  vector<int> a(26,0);
  rep(i,0,n) ++a[S[i]-'a'];

  if (n<26) { 
    for (int i='a'; i<='z'; ++i) 
      if (!a[i-'a']) { S += (char)i; break; }
    cout << S << endl;
  } else {
    S += ' ';
    if (next_permutation(S.begin(),S.end())) 
      for (int i=0; S[i]!=' '; ++i) cout << S[i];
    else cout << -1 << endl;
  }
}
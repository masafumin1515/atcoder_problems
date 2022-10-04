#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }

int N,ans=0;
unsigned int flagX=0, flagY=0;
string S, X, Y;
// --------------------
void _main() {
  cin >> N >> S;

  rep(i,1,N) {
    X = S.substr(0,i);
    Y = S.substr(i,N-i);
    flagX = 0;
    flagY = 0;
    rep(j,0,i) flagX |= 1 << (int)( (X[j]) - 96 );
    rep(k,0,N-i) flagY |= 1 << (int)( (Y[k]) - 96 );
    chmax(ans, __builtin_popcount(flagX & flagY));
  }

  cout << ans << endl;
}
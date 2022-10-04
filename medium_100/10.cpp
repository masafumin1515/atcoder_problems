#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int N, a[100010]={}, cnt[100010]={};
// ---------------------------------
void _main() {
  cin >> N;
  rep(i,0,N) cin >> a[i];
  rep(i,0,N) rep(j,-1,2) ++cnt[a[i] - j];
  cout << *max_element(begin(cnt), end(cnt)) << endl;
}
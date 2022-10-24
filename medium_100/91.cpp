#include<bits/stdc++.h>
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int K,S,ans,dup[3]={6,2,1};
// ---------------------------
void _main() {
  cin >> K >> S;
  for (int z=K;z>=0;--z) {
    for (int y=K;y>=0;--y) {
      int x=S-z-y;
      if (x<=K && x>=0) {
        ans += 1;
      }
    }
  }
  cout << ans << endl;
}
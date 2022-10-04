#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int N,a[100010], flag[100010],ans = 0;
// -----------------------
void _main() {
  cin >> N;
  rep(i,1,N+1) cin >> a[i];
  rep(i,1,N+1) flag[i] = 0;

  int button = 1, next_button;
  while(1) {
    int next_button = a[button];
    ++ans;
    flag[button] = 1;

    if(flag[next_button]) {
      ans=-1; 
      break;
    }

    if (next_button == 2) break;

    button = next_button;
  }
  cout << ans << endl;
}
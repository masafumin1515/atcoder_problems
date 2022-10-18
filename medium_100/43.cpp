#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int X,cnt;
// ------------------------------
void _main() {
  cin >> X;
  cnt=0;
  while(1) {
    int sum = cnt*(cnt+1)/2;
    if (sum >= X && (sum-X) <= cnt) break; 
    else ++cnt;
  }
  cout << cnt << endl;
}
#include<bits/stdc++.h>
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int f(int x) {
  if (x % 2) return 3 * x + 1;
  else return x / 2;
}

void _main() {
  int s;
  cin >> s;

  int x = s;
  int idx = 1;
  vector<bool> a(1000100, 0);
  a[x] = 1; // 初期値
  
  while(1) {
    int nx;
    nx = f(x);

    ++idx;
    x = nx;

    if (a[nx]) break;
    else a[nx] = 1; 
  }

  cout << idx << endl;
}
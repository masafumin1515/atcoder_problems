#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int N,sum;
// --------------------
int calc_square(vector<int> a, int x) {
  int rtv=0;
  rep(i,0,N) rtv += (a[i]-x)*(a[i]-x);
  return rtv;
}
// --------------------
void _main() {
  cin >> N;
  vector<int> a(N);
  rep(i,0,N) cin >> a[i];

  sum=0;
  rep(i,0,N) sum += a[i];

  cout << min(calc_square(a,sum/N),calc_square(a,(sum+N-1)/N)) << endl;
}
#include<bits/stdc++.h>
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;
using namespace std;

int N;
int main() {
  cin >> N;
  vector<ll> a(N);
  for (int i=0;i<N;++i) cin >> a[i];
  sort(a.begin(),a.end());

  int t=0;
  for (int i=N-2;i>=0;--i) {
    ll sum = 0;
    for (int j=0;j<=i;++j) sum += a[j];
    if (2*sum < a[i+1]) {
      t = i+1;
      break;
    }
  }

  cout << N-t << endl;
}
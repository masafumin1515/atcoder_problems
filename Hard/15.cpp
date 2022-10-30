#include<bits/stdc++.h>
using namespace std;
// -------------------------------------------------------------------------
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;
int N,negative_cnt,abs_min;
ll ans;
// -------------------------------------------------------------------------
int main() {
  // 入力
  cin >> N;
  abs_min=INF;
  vector<int> a(N);
  for (int i=0;i<N;++i) {
    cin >> a[i];
    if (a[i] < 0) negative_cnt++;
    abs_min = min(abs_min, abs(a[i]));
  }

  // 総和を計算
  for (auto i : a) { ans += abs(i); }

  // 負の数が奇数個であれば一番絶対値の小さいものを引く
  if (negative_cnt%2) ans -= 2*abs_min;

  // 出力
  cout << ans << endl;
}
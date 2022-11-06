#include<bits/stdc++.h>
using namespace std;

int N,H;
int sum,cnt;
vector<int> a,b;
// -----------------------------------
int main() {
  cin >> N >> H;
  a.resize(N,0);
  b.resize(N,0);
  for (int i=0;i<N;++i) cin >> a[i] >> b[i];

  sort(a.begin(),a.end());
  sort(b.begin(),b.end());

  int max_cutting_attack = a[N-1];
  auto itr = lower_bound(b.begin(),b.end(),max_cutting_attack);

  for (int i=N-1;i>=itr-b.begin() && sum<H;--i) { sum+=b[i]; ++cnt; }
  if (sum<H) cnt+=(H-sum+max_cutting_attack-1)/max_cutting_attack;

  cout << cnt << endl;
}
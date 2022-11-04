#include<bits/stdc++.h>
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;
using namespace std;

int N,ai,aj,dis;
// ------------------
int main() {
  cin >> N;
  vector<int> a(N);
  for (int i=0;i<N;++i) cin >> a[i];
  sort(a.begin(), a.end());

  dis = INF;
  ai = a[N-1];
  for (int j=0;j<N-1;++j) if (dis > abs(a[j]-(ai+2-1)/2)) dis = abs(a[j]-ai/2), aj = a[j];

  cout << ai << ' ' <<  aj << endl;
}
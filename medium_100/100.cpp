#include<bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int v[101010]={}; 
  for (int i=0;i<n;++i) { int v_i; cin >> v_i; ++v[v_i]; }
  sort(begin(v),end(v),greater<int>());
  auto itr = lower_bound(begin(v),end(v),0,greater<int>());

  int num_e = itr-begin(v);
  if (num_e == 1) cout << n/2 << endl;
  else if (num_e >= 2) cout << abs(v[0]-n/2) + abs(v[1]-n/2) << endl;
}
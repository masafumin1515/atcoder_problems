#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

void _main() {
  vector<int> A(2), B(2), C(2), D(2), direction_v(2), n_direction_v(2);
  cin >> A[0] >> A[1] >> B[0] >> B[1];

  rep(i, 0, 2) direction_v[i] = B[i] - A[i];

  n_direction_v[0] = -(direction_v[1]);
  n_direction_v[1] = direction_v[0];

  rep(i, 0, 2) C[i] = B[i] + n_direction_v[i];

  n_direction_v[0] = -(direction_v[0]);
  n_direction_v[1] = -(direction_v[1]);
  
  rep(i, 0, 2) D[i] = C[i] + n_direction_v[i];

  cout << C[0] << ' ' << C[1] << ' ' << D[0] << ' ' << D[1] << endl;
}
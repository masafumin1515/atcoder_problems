#include<bits/stdc++.h>
using namespace std;

int N;
vector<int> A;
vector<int> X;
// --------------------------
int main() {
  cin >> N;
  A.resize(N,0);
  X.resize(N+1,0);
  for (int i=0;i<N;++i) cin >> A[i];

  for (int x1=0; x1<=2*min(A[0],A[N-1]); x1+=2) {
    X[0] = x1;
    for (int i=0;i<N;++i) X[i+1] = 2*A[i]-X[i];
    if (X[0] == X[N]) break;
  }

  for (int i=0;i<N;++i) cout << X[i] << ' ';
}
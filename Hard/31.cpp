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
  for (int i=0;i<N;++i) {
    if (i%2 == 0) X[0] += A[i];
		else X[0] -= A[i];
  }
  for (int i=0;i<N;++i) X[i+1] = 2*A[i]-X[i];
  for (int i=0;i<N;++i) cout << X[i] << ' ';
}
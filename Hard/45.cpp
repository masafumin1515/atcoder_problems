#include<bits/stdc++.h>
using namespace std;

int Q;
int max_N=100000;
vector<int> l,r;
vector<bool> isprime;
vector<bool> A;
vector<int> B;
// -----------------------------------------------
vector<bool> eratosthenes(int N) {
  vector<bool> isprime(N+1, true);

  isprime[1] = false;
  for (int p=2;p<=N;++p) {
    if (!isprime[p]) continue;
    for (int q=p*2;q<=N;q+=p) isprime[q] = false;
  }

  return isprime;
}
// -----------------------------------------------
int main() {
  cin >> Q;
  l.resize(Q+1);
  r.resize(Q+1);
  
  for (int i=1;i<=Q;++i) cin >> l[i] >> r[i];

  A.resize(max_N+1,false);
  B.resize(max_N+1,0);
  isprime = eratosthenes(max_N);
  for (int i=1;i<=max_N;++i) if (isprime[i] && isprime[(i+1)/2]) A[i]=true;
  for (int i=1;i<=max_N;++i) B[i] += B[i-1] + A[i];

  for (int i=1;i<=Q;++i) cout << B[r[i]]-B[l[i]-1] << endl;
}
#include<bits/stdc++.h>
using namespace std;

int Q;
vector<int> l,r;
vector<bool> isprime;
vector<int> A;
vector<int> B;
// -----------------------------------------------
vector<bool> Eratosthenes(int N) {
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

}
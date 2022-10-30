#include<bits/stdc++.h>
using namespace std;

// ユークリッドの互除法 (b>=a)
long long gcd(long long a,long long b){
  return a ? gcd(b%a, a) : b;
}

// 素因数分解 ({prime, exponent})
map<long long, int> enumpr(long long n) {
	map<long long, int> V;
  // sqrt(N)以下の整数でnを割り算
	for(long long i=2;i*i<=n;i++) {
    // あまりが0 -> iを約数に持つ
    while(n%i==0) {
      V[i]++;
      // iで割り切れなくなるまで割り続ける
      n/=i;
    }
  }
  // n>1 -> nが素数
	if(n>1) V[n]++;
	return V;
}

int main() {
  long long A, B;
  cin >> A >> B;
  auto ep = enumpr(gcd(A, B));
  int ans = ep.size() + 1;
  cout << ans << endl;
}


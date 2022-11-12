#include<bits/stdc++.h>
using namespace std;

int K;
int cnt;
long long v;
queue<long long> q;
// ------------------------
int main() {
  cin >> K;
  for (long long i=1;i<10;++i) q.push(i);

  while(cnt!=K) {
    v = q.front();
    q.pop();
    cnt++;
    if (v%10 != 0) q.push(10*v+v%10-1);
    q.push(10*v+v%10);
    if (v%10 != 9) q.push(10*v+v%10+1);
  }

  cout << v << endl;
}
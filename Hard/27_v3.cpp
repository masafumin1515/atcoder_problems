#include<bits/stdc++.h>
using namespace std;

int N;
int main() {
  cin >> N;
  vector<long long> a(N);
  for (int i=0;i<N;++i) cin >> a[i];
  sort(a.begin(),a.end());

  vector<long long> s(N);
  s[0] = a[0];
  for (int i=0;i<N-1;++i) s[i+1] = s[i] + a[i+1];

  int t=0;
  for (int i=N-2;i>=0;--i) {
    long long sum = 0;
    sum = s[i];
    if (2*sum < a[i+1]) {
      t = i+1;
      break;
    }
  }

  cout << N-t << endl;
}
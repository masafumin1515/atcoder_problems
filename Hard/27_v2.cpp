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
  bool flag=true;
  for (int i=0;i<N-1 && flag;++i) {
    long long sum = 0;
    sum = s[i];
    for (int j=i+1;j<N;++j) {
      if (2*sum >= a[j]) sum = s[j];
      else {
        ++t;
        break;
      }

      if (j==N-1) flag=false;
    }
  }

  cout << N-t << endl;
}
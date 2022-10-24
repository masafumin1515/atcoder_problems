#include<bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  int m=0;

  while(m*(m+1)/2 < N) { ++m; }
  for (int i=1;i<=m;++i) 
    if (m*(m+1)/2 - N != i) { cout << i << endl; } 
}
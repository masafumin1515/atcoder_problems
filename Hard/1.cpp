#include<bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
#define all_arr(x) begin(x), end(x)
using namespace std;
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;

int main() {
  string S; cin >> S;
  int n=S.size();

  vector<int> prev_p(n,1), next_p(n,0);
  vector<vector<int> > memo;
  
  int x=0;
  for (;;++x) {
    if (S[1] == 'L') next_p[0] = prev_p[1];
    if (S[n-2] == 'R') next_p[n-1] = prev_p[n-2];
    for (int i=1;i<n-1;++i) {
      if (S[i-1] == 'R') next_p[i] = prev_p[i-1];
      if (S[i+1] == 'L') next_p[i] += prev_p[i+1];
    }
    memo.push_back(next_p);
    for (int i=0;i<n;++i) {
      prev_p[i] = next_p[i];
      next_p[i]=0;
    }
    if (x>=2 && x%2 == 1 && memo[x] == memo[x-2]) break; 
  }

  for (int i=0;i<n;++i) cout << memo[x][i] << ' ';
}
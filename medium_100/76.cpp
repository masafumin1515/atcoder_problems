#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int N;
string S;
// -------------------------------
void _main() {
  cin >> N >> S;
  vector<int> num_W(N+1, 0),num_E(N+1, 0), cnt(N, 0);
  rep(i,0,N) {
    num_W[i+1] = num_W[i] + (S[i]=='W' ? 1 : 0);
    num_E[i+1] = num_E[i] + (S[i]=='E' ? 1 : 0);
  }
  rep(i,0,N) cnt[i] = num_W[i] + (num_E[N]-num_E[i+1]);
  sort(all(cnt));
  cout << cnt[0] << endl;
}
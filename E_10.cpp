#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

void _main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, 0, N) cin >> a[i];
  sort(all(a));

  int alice=0, bob=0;
  rep(i, 0, N) {
    int v = a.back();
    if (i % 2 == 0) alice += v;
    else bob += v;
    a.pop_back();
  }

  cout << alice - bob << endl;
}
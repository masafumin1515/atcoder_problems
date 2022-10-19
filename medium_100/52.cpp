#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a) // for(auto &x : vec)
#define all(x) (x).begin(),(x).end()
#define all_arr(x) begin(x), end(x)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int N;
ll sum;
string ans;
// -------------------------------------
void _main() {
  cin >> N;
  vector<pair<int,int> > tasks(N);
  rep(i,0,N) {
    int a,b;
    cin >> a >> b; 
    tasks.push_back(make_pair(b,a));
  }
  sort(all(tasks));

  sum=0;
  ans="Yes";
  for (auto &pair : tasks) {
    sum += pair.second;
    if (sum > pair.first) {
      ans="No";
      break;
    }
  }

  cout << ans << endl;
}
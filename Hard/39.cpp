#include<bits/stdc++.h>
const int INF = INT_MAX / 2;
using namespace std;

int N,ans;
string s;
vector<int> left_b_cnt;
vector<int> right_w_cnt;
// ------------------------
int main() {
  cin >> N;
  cin >> s;
  left_b_cnt.resize(N,0);
  right_w_cnt.resize(N,0);

  for (int i=1;i<N;++i) {
    left_b_cnt[i]+=left_b_cnt[i-1];
    if (s[i-1]=='#') ++left_b_cnt[i];
  }

  for (int i=N-2;i>=0;--i) {
    right_w_cnt[i]+=right_w_cnt[i+1];
    if (s[i+1]=='.') ++right_w_cnt[i];
  }

  ans=INF;
  for (int i=0;i<N;++i) ans=min(ans, left_b_cnt[i]+right_w_cnt[i]);

  cout << ans << endl;
}
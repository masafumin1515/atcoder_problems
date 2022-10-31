#include<bits/stdc++.h>
using namespace std;

int N,cnt_end_A,cnt_start_B,cnt_internal_AB,cnt_AB,ans;
// --------------------
int main() {
  // 入力
  cin >> N;
  vector<string> S(N);
  for(int i=0;i<N;++i) cin >> S[i];

  // B*, *A, B*A, *AB*, の4種類の数をカウントする
  for (int i=0;i<N;++i) {
    string si = S[i];
    int length = si.size();
    if (si[0] == 'B') ++cnt_start_B;
    if (si[length - 1] == 'A') ++cnt_end_A;
    if (si[length - 1] == 'A' && si[0] == 'B') ++cnt_AB;
    for (int j=0;j<length-1;++j) if (si[j]=='A' && si[j+1]=='B') ++cnt_internal_AB;
  }

  // B*Aが含まれており、B*Aしかない場合は-1する
  if (cnt_AB && cnt_start_B == cnt_AB && cnt_end_A == cnt_AB) ans=cnt_AB-1;
  else ans=min(cnt_end_A,cnt_start_B);
  ans+=cnt_internal_AB;

  // 出力
  cout << ans << endl;
}
#include<bits/stdc++.h>
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;
using namespace std;

int pos;
string S,ans,strs[2]={"dream","erase"};
// ----------------------
int main() {
  cin >> S;
  ans="YES";
  for (;pos<(int)S.size();) {
    string str=S.substr(pos,5);
    if (str == strs[0] || str == strs[1]) {
      pos += 5;
      if ("r" == S.substr(pos,1)) pos += 1;
    } else {
      ans="NO";
      break;
    }
  }
  cout << ans << endl;
}
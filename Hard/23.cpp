#include<bits/stdc++.h>
using namespace std;

int pos; // 文字列取り出し開始位置
string S,ans;
// ----------------------
int main() {
  cin >> S;

  pos=0;
  ans="YES";
  for (;pos<(int)S.size();) {
    string str=S.substr(pos,5);
    if (str == "dream") {
      pos += 5;
      if ("er" == S.substr(pos,2) && "era" != S.substr(pos,3)) pos += 2;
    } else if (str == "erase") {
      pos += 5;
      if ("r" == S.substr(pos,1)) pos += 1;
    } else {
      ans="NO";
      break;
    }
  }
  cout << ans << endl;
}
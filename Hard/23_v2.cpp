#include<bits/stdc++.h>
using namespace std;

int pos; // 文字列取り出し開始位置
int N; // 文字数
bool flag; // Sが4種の文字列に分解できるか
string S;
// -----------------------
int main() {
  cin >> S;
  N = (int)S.size();
  reverse(S.begin(),S.end());

  flag=true;
  for(;pos<N && flag;) {
    if (S.substr(pos,5) == "maerd") pos+=5;
    else if (S.substr(pos,7) == "remaerd") pos+=7;
    else if (S.substr(pos,5) == "esare") pos+=5;
    else if (S.substr(pos,6) == "resare") pos+=6;
    else flag=false;
  }

  cout << (flag ? "YES" : "NO") << endl;
}
#include<bits/stdc++.h>
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int a_cnt,b_cnt,c_cnt;
char turn;
string S_a,S_b,S_c;
// ---------------------------------
void decide_winner(string &S, int &cnt) {
  if (cnt >= S.size()) return;
  else { 
    char c = S[cnt];
    ++cnt;
    if (c == 'a') {
      turn = 'A'; 
      decide_winner(S_a, a_cnt);
    } else if (c == 'b') {
      turn = 'B'; 
      decide_winner(S_b, b_cnt);
    } else if (c == 'c') {
      turn = 'C'; 
      decide_winner(S_c, c_cnt);
    }
  }
}
// ----------------------------------
void _main() {
  cin >> S_a >> S_b >> S_c;
  turn='A'; a_cnt=0; b_cnt=0; c_cnt=0;

  decide_winner(S_a,a_cnt);
  cout << turn << endl;
}
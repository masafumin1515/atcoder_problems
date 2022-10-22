#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define fore(i,a) for(auto &i:a) // for(auto &x : vec)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int Q;
bool isRev;
string S,ans;
// ---------------------
void _main() {
  cin >> S >> Q;

  deque<char> deq;
  fore(c, S) deq.push_back(c);

  isRev = false;
  rep(i,0,Q) {
    int T;
    cin >> T;
    if (T == 1) isRev = !isRev;
    else {
      int F;
      char C;
      cin >> F >> C;
      if (F == 1) {
        if (isRev) deq.push_back(C);
        else deq.push_front(C);
      } else {
        if (isRev) deq.push_front(C);
        else deq.push_back(C);
      }
    }
  }

  if (isRev) {
    while(!deq.empty()) {
      ans += deq.back();
      deq.pop_back();
    } 
  } else {
    while(!deq.empty()) {
      ans += deq.front();
      deq.pop_front();
    }
  }

  cout << ans << endl;
}
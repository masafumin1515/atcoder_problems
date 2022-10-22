#include<bits/stdc++.h>
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int x,y,ans,jump;
//-----------------------------
void _main() {
  cin >> x >> y;

  if ((x<0 && y<=0) || (x>=0 && y>0)) {
    if (x<y) jump=0;
    else jump=2;
  } else {
    jump=1;
  }

  cout << (abs(abs(y)-abs(x))) + jump  << endl;
}
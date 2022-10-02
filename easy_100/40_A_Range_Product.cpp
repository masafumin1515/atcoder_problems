#include<bits/stdc++.h>
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

void _main() {
  int a,b;
  string ans;
  cin >> a >> b;

  if ( (!a || !b) || (a<0 && b>0) ) ans="Zero";
  else if ( a>0 ) ans="Positive";
  else if ( b<0 ) {
    if ( (abs(b-a)+1)%2 ) ans="Negative";
    else ans="Positive";
  }
  
  cout << ans << endl;
}
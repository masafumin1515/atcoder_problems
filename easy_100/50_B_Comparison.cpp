#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

void _main() {
  string A,B,ans;
  cin >> A >> B;

  if ( A==B ) ans="EQUAL";
  else if ( A.length()>B.length() ) ans="GREATER";
  else if ( A.length()<B.length() ) ans="LESS";
  else  {
    if ( A>B ) ans="GREATER";
    else if ( A<B ) ans="LESS";
  }

  cout << ans << endl;
}
#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

int N, K;
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N >> K;
 
    int ans = (N - 1 + K - 2) / (K - 1);
    cout << ans << endl;
}
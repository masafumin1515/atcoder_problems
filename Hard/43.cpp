#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a) // for(auto &x : vec)
#define all(x) (x).begin(),(x).end()
#define all_arr(x) begin(x), end(x)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int H, W, C[10][10], A[202][202];
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> H >> W;
    rep(i, 0, 10) rep(j, 0, 10) cin >> C[i][j];
    rep(y, 0, H) rep(x, 0, W) cin >> A[y][x];
 
    rep(k, 0, 10) rep(i, 0, 10) rep(j, 0, 10) C[i][j] = min(C[i][j], C[i][k] + C[k][j]);
    int ans = 0;
    rep(y, 0, H) rep(x, 0, W) if (0 <= A[y][x]) ans += C[A[y][x]][1];
    cout << ans << endl;
} 
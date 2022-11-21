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

int N, x[101], y[101], h[101];
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N;
    rep(i, 0, N) cin >> x[i] >> y[i] >> h[i];
 
    rep(cx, 0, 101) rep(cy, 0, 101) {
        int H = 1;
        rep(i, 0, N) if (h[i]) H = h[i] + abs(cx - x[i]) + abs(cy - y[i]);
        int ok = 1;
        rep(i, 0, N) if (max(H - abs(x[i] - cx) - abs(y[i] - cy), 0) != h[i]) ok = 0;
        if (ok) {
            printf("%d %d %d\n", cx, cy, H);
            return;
        }
    }
}
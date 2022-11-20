#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a) // for(auto &x : vec)
#define all(x) (x).begin(),(x).end()
#define all_arr(x) begin(x), end(x)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int inf = INT_MAX / 2; const ll INFL = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int N;
int memo[101010];
//---------------------------------------------------------------------------------------------------
// f(cu) := cu円引き出すのに必要な最小の操作回数
int f(int cu) {
    if (cu == 0) return 0;
    if (memo[cu]) return memo[cu];
 
    int res = inf;
    
    // 1yen
    chmin(res, f(cu - 1) + 1);
 
    // 6yen
    int x = 6;
    while (x <= cu) {
        chmin(res, f(cu - x) + 1);
        x *= 6;
    }
 
    // 9yen
    x = 9;
    while (x <= cu) {
        chmin(res, f(cu - x) + 1);
        x *= 9;
    }
 
    return memo[cu] = res;
}
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N;
    cout << f(N) << endl;
}
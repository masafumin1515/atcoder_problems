#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std; void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int H, W; string S[101];
int dp[101][101];
//---------------------------------------------------------------------------------------------------
void _main() {
	cin >> H >> W;
	rep(y, 0, H) cin >> S[y];

	rep(y, 0, H) rep(x, 0, W) dp[y][x] = inf; // dp[i][j] := (i,j)に到達するために行う反転操作の最小回数
	dp[0][0] = 0;
	if (S[0][0] == '#') dp[0][0] = 1; 

	rep(y, 0, H) rep(x, 0, W) {
		if (y + 1 < H) {
			if (S[y][x] == '.' && S[y + 1][x] == '#') chmin(dp[y + 1][x], dp[y][x] + 1); // .->#の移動時のみ反転回数を増やす
			else chmin(dp[y + 1][x], dp[y][x]); // 反転回数は増えない
		}
		if (x + 1 < W) {
			if (S[y][x] == '.' && S[y][x + 1] == '#') chmin(dp[y][x + 1], dp[y][x] + 1); // .->#の移動時のみ反転回数を増やす
			else chmin(dp[y][x + 1], dp[y][x]); // 反転回数は増えない
		}
	}

	cout << dp[H - 1][W - 1] << endl;
}

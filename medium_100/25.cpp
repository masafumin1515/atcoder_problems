#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define fore(i,a) for(auto &i:a) // for(auto &x : vec)
#define all_arr(x) begin(x), end(x)
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int INF = INT_MAX / 2; const ll INFL = 1LL << 60;

int N,K,a[200010],cnt=0,ans=0;
// ---------------------------
int N, K, A[201010];
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N >> K;
    rep(i, 0, N) cin >> A[i];

    // カウント
    map<int, int> cnt;
    rep(i, 0, N) cnt[A[i]]++;

    // 個数を抜き出して昇順ソート
    vector<int> v;
    fore(p, cnt) v.push_back(p.second);
    sort(v.begin(), v.end());

    int n = v.size();

    if (n <= K) {
        printf("0\n");
    }
    else {
        int ans = 0;
        rep(i, 0, n - K) ans += v[i];
        printf("%d\n", ans);
    }
}
#include<bits/stdc++.h>
using namespace std;

int N;
vector<long long> x, y;
pair<long,long> pq; // (p,q)のペア
map<pair<long,long>,long> pq_map;   // pqの組の数を数える連想配列
// ---------------------------------------
// 頂点 v を始点とした深さ優先探索
void dfs(int v, vector<vector<int>> &G, vector<bool> &seen) {
    // 頂点 v を探索済みにする
    seen[v] = true;
    // G[v] に含まれる頂点 v2 について、
    for(auto v2 : G[v]) {
        // v2 がすでに探索済みならば、スキップする
        if(seen[v2]) {continue;}
        // v2 始点で深さ優先探索を行う (関数を再帰させる)
        dfs(v2, G, seen);
    }
    return;
}

int main() {
    cin >> N;
    x.resize(N); y.resize(N);
    vector<vector<int>> G(N);   // グラフを表現する隣接リスト
    for (int i = 0; i < N; ++i) cin >> x[i] >> y[i];

    // 最頻出のpqを求める
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j) {continue;}
            pq_map[make_pair(x[i]-x[j], y[i]-y[j])]++;
        }
    }
    int max_cnt = 0;
    for (const auto &entry: pq_map) {
        if (max_cnt < entry.second) {
            max_cnt = entry.second;
            pq = entry.first;
        }
    }

    // (p,q)でつなぐ
    for(int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j) {continue;}
            long p = x[j]-x[i], q = y[j]-y[i];
            if (pq.first == p && pq.second == q) {
                G[i].push_back(j);
                G[j].push_back(i);
            }
        }
    }

    vector<bool> seen(N, false);    // seen[v]：頂点 v が探索済みなら true, そうでないなら false
    int ans = 0;    // 答えとなる変数
    // 全ての頂点について
    for(int v = 0; v < N; ++v) {
        // 頂点 v がすでに訪問済みであれば、スキップ
        if(seen[v]) {continue;}
        // そうでなければ、頂点 v を含む連結成分は未探索
        // 深さ優先探索で新たに訪問し、答えを 1 増やす
        dfs(v, G, seen);
        ans++;
    }
    // 答えを出力する
    cout << ans << endl;

	return 0;
}
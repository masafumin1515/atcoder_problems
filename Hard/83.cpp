#include<bits/stdc++.h>
using namespace std;

int H,W;
int ans;
int dy[4] = {1, 0, -1, 0};
int dx[4] = {0, -1, 0, 1};
vector<string> A;
vector<vector<bool> > seen; // 探索済みかどうか
queue<pair<int,int> > q; // 今探索する座標
queue<pair<int,int> > nq; // 次探索する座標
// ----------------------------
int main() {
    cin >> H >> W;
    A.resize(H);
    seen.resize(H, vector<bool>(W,0));
    for (int i=0; i<H; ++i) {
        cin >> A[i];
        for (int j=0; j<W; ++j) if (A[i][j] == '#') {
            nq.push(make_pair(i,j));
            seen[i][j] = true;
        }
    }

    while(!nq.empty()) {
        q.swap(nq);
        queue<pair<int,int> > ().swap(nq); // 空にする
        while(!q.empty()) {
            auto pos = q.front();
            q.pop();
            int y = pos.first;
            int x = pos.second;
            for (int i=0; i<4; ++i) {
                int ny = y+dy[i];
                int nx = x+dx[i];
                if (nx<W && ny<H && nx>=0 && ny >= 0 && !seen[ny][nx]) {
                    seen[ny][nx] = true;
                    if (A[ny][nx] == '.') nq.push(make_pair(ny,nx));
                }
            }
        }
        ans++;
    }

    cout << ans-1 << endl; // 初回の操作を行う座標を決めるために1回多くなっている
}
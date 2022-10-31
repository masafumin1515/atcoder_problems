#include<bits/stdc++.h>
using namespace std;

int H,W,N,grid[110][110]={};
int dx[2] = {1, -1},dy[2]={1, -1};
// ----------------------------
pair<int, int> paint(int color, int cnt, pair<int, int> &pos) {
  if (!cnt) return pos;

  int y = pos.first;
  int x = pos.second;
  grid[y][x] = color;
  --cnt;

  if (x+dx[0] < W && !grid[y][x+dx[0]]) pos.second = x+dx[0];
  else if (x+dx[1] > -1 && !grid[y][x+dx[1]]) pos.second = x+dx[1];
  else if (y+dy[0] < H && !grid[y+dy[0]][x]) pos.first = y+dy[0];
  return paint(color, cnt, pos); // 右
}
// ----------------------------
int main() {
  cin >> H >> W >> N;
  vector<int> a(N, 0);
  for (int i=0;i<N;++i) cin >> a[i];

  vector<int> colors(N);
  iota(colors.begin(), colors.end(), 1);

  pair<int, int> pos = make_pair(0,0);
  for (int i=0;i<N;++i) pos = paint(colors[i], a[i], pos);

  for (int i=0;i<H;++i) {
    for (int j=0;j<W;++j) { cout << grid[i][j] << ' '; }
    cout << endl;
  }
}
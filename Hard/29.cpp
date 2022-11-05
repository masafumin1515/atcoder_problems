#include<bits/stdc++.h>
using namespace std;

int N,M;
vector<int> a; 
vector<bool> boxes; // 各箱に玉を入れるかどうか
// ----------------------------
int main() {
  cin >> N;
  a.resize(N+1,0);
  boxes.resize(N+1,0);
  for (int i=1;i<=N;++i) cin >> a[i];

  for (int i=N;i>=1;--i) {
    int num_of_balls=0;
    int num_of_boxes=(int)N/i; // 箱の数
    for (int j=0;j<num_of_boxes;++j) num_of_balls += boxes[i+i*j];
    if (num_of_balls%2 != a[i]) {
      ++M;
      boxes[i]=1;
    }
  }

  cout << M << endl;
  for (int i=1;i<=N;++i) if (boxes[i]) cout << i << ' ';
}

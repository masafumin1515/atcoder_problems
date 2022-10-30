#include<bits/stdc++.h>
using namespace std;

int main(void){
  // 入力
  int N,M;
  const int nmmax=50;
  char A[nmmax][nmmax],B[nmmax][nmmax];
  cin >> N >> M;
  for(int y=0;y<N;++y) for(int x=0;x<N;++x) cin >> A[y][x];
  for(int y=0;y<M;++y) for(int x=0;x<M;++x) cin >> B[y][x];

  // M×Mをブロックとして縦,横に(N-(M-1))回動かすループ
  bool exist=false;
  for(int ly=0;ly<N;++ly){
    for(int lx=0;lx<N;++lx){
      if(ly+M-1>=N or lx+M-1>=N) continue; 
  
      // M×M個の要素が全て一致しているか判定する
      bool match=true;
      for(int y=0;y<M;++y) for(int x=0;x<M;++x) if(A[ly+y][lx+x]!=B[y][x]) match=false;

      if(match) exist=true;
    }
  }

  // 出力
  if(exist) cout << "Yes" << endl;
  else cout << "No" << endl;
} 
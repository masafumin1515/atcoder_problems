#include<bits/stdc++.h>
using namespace std;

int N;
long long X;
long long patty[52];
long long burger[52];
// ------------------------------
long long func(int level, long long x){
    // 0. levelが0の時
    if (level == 0) return 1; 
    // 1.xが1個目の時
    else if (x == 1) return 0; 
    // 2.xが2個目からburger[level-1]+1個目の時
    else if (2<=x && x<=burger[level-1]+1) return func(level-1,x-1); 
    // 3.xがburger[level-1]+2個目の時
    else if (x == burger[level-1]+2) return patty[level-1]+1; 
    // 4.xが3+burger[level-1]から2+2*burger[level-1]個目の時
    else if (3+burger[level-1]<=x && x<=2+2*burger[level-1]) return patty[level-1]+1+func(level-1,x-burger[level-1]-2); 
    // 5.xがburger[level]の時
    return patty[level]; 
}
// ------------------------------
int main() {
    cin >> N >> X;
    patty[0]=1;
    burger[0]=1;
    for (int i=1; i<N+1; ++i) {
        patty[i]=2*patty[i-1]+1;
        burger[i]=2*burger[i-1]+3;
    }

    long long ans = func(N,X);
    cout << ans << endl;
}
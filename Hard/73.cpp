#include<bits/stdc++.h>
const int INF = INT_MAX / 2;
using namespace std;

int N;
int memo[101010]; // memo[i]:i円を引き出すのに必要な最小の回数
// ----------------------------
// f(v) := v円を引き出すのに必要な回数を返す
int f(int v) {
    if (v==0) return 0;
    if (memo[v]) return memo[v];

    int res = INF;
    res = min(res,f(v-1)+1);

    int x=6;
    while(x<=v) {
        res = min(res, f(v-x)+1);
        x*=6;
    }

    x=9;
    while(x<=v) {
        res = min(res, f(v-x)+1);
        x*=9;
    }

    memo[v] = res;
    return res;
}
// ----------------------------
int main() {
    cin >> N;
    cout << f(N) << endl;
}
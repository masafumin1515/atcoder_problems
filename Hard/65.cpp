#include<bits/stdc++.h>
using namespace std;

int N;
map<int,int> cnt;
// ----------------------
int main() {
    cin >> N;
    for (int i=0; i<N; ++i) {
        int a; cin >> a;
        cnt[a]++;
    }

    int ans;
    int size = (int)cnt.size();
    int diff = N-size;
    if (diff%2) ans = size-1;
    else ans = size;

    cout << ans << endl;
}
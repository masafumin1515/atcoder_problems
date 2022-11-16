#include<bits/stdc++.h>
using namespace std;

int N;
long long ans;
vector<long> A;
vector<long long> S;
map<long long, long long> cnt;
// -----------------------------
int main() {
    cin >> N;
    A.resize(N); S.resize(N+1);
    for (int i=0; i<N; ++i) cin >> A[i];

    S[0] = 0;
    for (int i=0; i<N; ++i) {
        S[i+1] = S[i]+A[i];
        cnt[S[i+1]]++;
    }

    for (const auto &item : cnt) if (item.second>=2) ans += item.second*(item.second-1)/2;
    ans += cnt[0];
    cout << ans << endl;
}
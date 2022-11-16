#include<bits/stdc++.h>
using namespace std;

int N,A,B;
long long ans;
vector<int> X;
// -----------------------------
int main() {
    cin >> N >> A >> B;
    X.resize(N);
    for (int i=0; i<N; ++i) cin >> X[i];

    for (int i=0; i<N-1; ++i) {
        long long dx = X[i+1]-X[i];
        if (dx*A < B) ans += dx*A;
        else ans += B;
    }

    cout << ans << endl;
}
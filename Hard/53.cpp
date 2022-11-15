#include<bits/stdc++.h>
using namespace std;

int N;
vector<long long> x, y;
// ------------------------------------------------
int main() {
    cin >> N;
    x.resize(N); y.resize(N);
    for (int i = 0; i < N; ++i) cin >> x[i] >> y[i];

    int res = N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j) continue;
            long long p = x[j] - x[i], q = y[j] - y[i];

            int sub = 0;
            for (int i2 = 0; i2 < N; ++i2) {
                for (int j2 = 0; j2 < N; ++j2) {
                    if (j2 == i2) continue;
                    if (p == x[j2] - x[i2] && q == y[j2] - y[i2]) ++sub;
                }
            }
            res = min(res, N - sub);
        }
    }

    cout << res << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector<long long> A(N), B(M), C(M);
    for (int i = 0; i < N; ++i) cin >> A[i];
    for (int i = 0; i < M; ++i) cin >> B[i] >> C[i];

    // M回の操作の順番を、Cが大きい順にソートして配列に格納する
    vector<int> id(M);
    sort(A.begin(), A.end());
    iota(id.begin(), id.end(), 0);
    sort(id.begin(), id.end(), [&](int i, int j) { return C[i] > C[j]; });

    // Aの最小値をC[i]で更新
    long long sum = 0;
    long long K = 0;
    for (auto i : id) {
        for (int j = 0; j < B[i]; ++j) {
            if (K >= N) break;
            A[K] = max(A[K], C[i]);
            ++K;
        }
    }
    for (int i = 0; i < N; ++i) sum += A[i];        
    cout << sum << endl;
}
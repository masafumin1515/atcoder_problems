// #include<bits/stdc++.h>
// using namespace std;

// int H,W,A,B;
// vector<int> h_cnt;
// vector<int> w_cnt;
// vector<vector<int> > a;
// // -------------------------------
// int main() {
//     cin >> H >> W >> A >> B;
//     h_cnt.resize(H,0); // 行: min(0の個数,1の個数)
//     w_cnt.resize(W,0); // 列: min(0の個数,1の個数)
//     a.resize(H, vector<int>(W));
//     for (int i=0; i<H; ++i) {
//         for (int j=0; j<W; ++j) {
//             if (h_cnt[i]<A && w_cnt[j]<B) {
//                 a[i][j]=1;
//                 h_cnt[i]++;
//                 w_cnt[j]++;
//             }
//         }
//     }
//     for (int i=0; i<H; ++i) {
//         for (int j=0; j<W; ++j) cout << a[i][j] << ' ';
//         cout << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, A, B;
    cin >> H >> W >> A >> B;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (i < B && j < A) cout << 0;
            else if (i >= B && j >= A) cout << 0;
            else cout << 1;
        }
        cout << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int N;
int x[101],y[101],h[101];
// -----------------------
int main() {
    cin >> N;
    for (int i=0; i<N; ++i) cin >> x[i] >> y[i] >> h[i];
    for (int cx=0; cx<101; ++cx) {
        for (int cy=0; cy<101; ++cy) {
            int H;
            for (int i=0; i<N; ++i) if (h[i]) H = h[i]+abs(cx-x[i])+abs(cy-y[i]);
            bool ok=true;
            for (int i=0; i<N; ++i) if (h[i] != max((H-abs(x[i]-cx)-abs(y[i]-cy)),0)) ok=false;
            if (ok) {
                cout << cx << ' ' << cy << ' ' << H << ' ' << endl;
                return 0;
            }
        }
    } 
}
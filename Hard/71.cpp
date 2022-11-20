#include<bits/stdc++.h>
using namespace std;

int N;
int med;
long long sum;
vector<int> a;
vector<int> dis; // 中央値計算用
// -----------------------------------
int main() {
    cin >> N;
    a.resize(N);
    dis.resize(N);
    for (int i=0; i<N; ++i) {
        cin >> a[i];
        dis[i]=a[i]-(i+1);
    }
    sort(dis.begin(),dis.end());
    med = dis[dis.size()/2];
    for (int i=0; i<N; ++i) sum += abs(a[i]-(med+i+1));
    cout << sum << endl;
}
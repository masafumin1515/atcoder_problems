#include<bits/stdc++.h>
using namespace std;

int N,x;
long long ans;
vector<int> a;
vector<int> a_fix;
// ------------------------------
int main() {
    cin >> N >> x;
    a.resize(N);
    a_fix.resize(N);
    for (int i=0; i<N; ++i) {
        cin >> a[i];
        a_fix[i]=a[i];
    }
    if (a_fix[0]>x) a_fix[0]=x;
    for (int i=0; i<N-1; ++i) {
        if (a_fix[i]+a_fix[i+1] > x) {
            a_fix[i+1]-=(a_fix[i+1]-(x-a_fix[i]));
            a_fix[i+1]=max(0,a_fix[i+1]);
        }
    }
    for (int i=0; i<N; ++i) ans+=a[i]-a_fix[i];
    cout << ans << endl;
}
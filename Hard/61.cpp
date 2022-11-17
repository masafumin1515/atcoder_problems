#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int K; cin >> K;
    for (int i=0; i<s.size() && K>0; ++i) {
        int t = (s[i]-'a') ? 26-(s[i]-'a') : 0;
        if (K >= t) {
            s[i]='a';
            K-=t;
        }
    }
    if (K>0) s[s.size()-1]+=(K%26);
    for (int i=0; i<s.size(); ++i) cout << s[i];
}

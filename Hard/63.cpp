#include<bits/stdc++.h>
using namespace std;
const int INF = INT_MAX / 2;

void func(int N, int cur, vector<int> nums, int &ans){
    if (cur >= N) {
        ans = min(ans, cur);
        return;
    }

    for (int i=0; i<(int)nums.size(); ++i) {
        if (!cur && !nums[i]) continue;
        int nx_cur = cur*10 + nums[i];
        func(N, nx_cur, nums, ans);
    }
}

int main() {
    int N,K;
    int ans;
    cin >> N >> K;
    vector<int> D;
    vector<int> a,nums;
    D.resize(K);
    for (int i=0; i<K; ++i) cin >> D[i];
    for (int i=0; i<10; ++i) {
        bool exist=false;
        for (int j=0; j<K; ++j) if (D[j] == i) exist=true;
        if (!exist) nums.push_back(i);
    }

    ans=INF;
    func(N, 0, nums, ans);
    cout << ans << endl;
}
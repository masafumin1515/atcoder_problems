#include<bits/stdc++.h>
using namespace std;

// 約数列挙
vector<long long> enum_divisors(long long N) {
  vector<long long> res;
  for (long long i = 1; i * i <= N; ++i) {
    if (N % i == 0) {
      res.push_back(i);
      // 重複しないならば i の相方である N/i も push
      if (N/i != i) res.push_back(N/i);
    }
  }
  // 小さい順に並び替える
  sort(res.begin(), res.end());
  return res;
}

// 素数判定
bool is_prime(long long N) {
  if (N == 1) return false;
  for (long long i = 2; i * i <= N; ++i) {
    if (N % i == 0) return false;
  }
  return true;
}

int main() {
  // 入力
  long long A, B;
  cin >> A >> B;
  const auto &res_A = enum_divisors(A);
  const auto &res_B = enum_divisors(B);

  // 約数の集合どうしの積集合を取る
  vector<long long> result;
  set_intersection(res_A.begin(),res_A.end(),res_B.begin(), res_B.end(),inserter(result, result.end()));

  int ans;
  for (auto &value : result) if (is_prime(value)) ++ans;

  // 約数1を追加して出力
  cout << ans+1 << endl;
}

# Hard 100

※わからなくて答え見た問題はチェックを打たない。

| 結果               | 見直し             | 問題番号 | 問題                                                                                    |
| ------------------ | ------------------ | -------- | --------------------------------------------------------------------------------------- |
| <ul><li> [ ] </ul> | <ul><li> [ ] </ul> | 1        | [D. Gathering Children](https://atcoder.jp/contests/abc065/tasks/abc065_b)              |
| <ul><li> [ ] </ul> | <ul><li> [ ] </ul> | 3        | [A. Range Flip Find Route](https://atcoder.jp/contests/agc043/tasks/agc043_a)           |
| <ul><li> [ ] </ul> | <ul><li> [ ] </ul> | 5        | [D. Powerful Discount Tickets](https://atcoder.jp/contests/abc141/tasks/abc141_d)       |
| 2022/11/6          | <ul><li> [ ] </ul> | 37       | [C - Strawberry Cakes](https://atcoder.jp/contests/ddcc2020-qual/tasks/ddcc2020_qual_c) |
| 2022/11/6          | -                  | 39       | [C. Stones](https://atcoder.jp/contests/tenka1-2019/tasks/tenka1_2019_c)                |
| 2022/11/6          | <ul><li> [ ] </ul> | 41       | [C. Triangular Relationship](https://atcoder.jp/contests/abc108/tasks/arc102_a)         |
| 2022/11/6          | <ul><li> [ ] </ul> | 43       | [D. Wall](https://atcoder.jp/contests/abc079/tasks/abc079_d)                            |
| 2022/11/8          | <ul><li> [ ] </ul> | 45       | [D. 2017-like Number](https://atcoder.jp/contests/abc084/tasks/abc084_d)                |
| 2022/11/13         | <ul><li> [ ] </ul> | 47       | [D. Lunlun Number](https://atcoder.jp/contests/abc161/tasks/abc161_d)                   |
| 2022/11/13         | <ul><li> [ ] </ul> | 49       | [D. Bouquet](https://atcoder.jp/contests/abc156/tasks/abc156_d)                         |
| 2022/11/13         | <ul><li> [ ] </ul> | 51       | [D. Knight](https://atcoder.jp/contests/abc145/tasks/abc145_d)                          |
| 2022/11/15         | <ul><li> [ ] </ul> | 53       | [B. Picking Up](https://atcoder.jp/contests/diverta2019-2/tasks/diverta2019_2_b)        |
| 2022/11/15         | -                  | 55       | [D. Walk and Teleport](https://atcoder.jp/contests/abc052/tasks/arc067_b)               |
| 2022/11/15         | <ul><li> [ ] </ul> | 57       | [A. Zero-Sum Ranges](https://atcoder.jp/contests/agc023/tasks/agc023_a)                 |
| 2022/11/17         | <ul><li> [ ] </ul> | 59       | [C. 755](https://atcoder.jp/contests/abc114/tasks/abc114_d)                             |
| 2022/11/17         | <ul><li> [ ] </ul> | 61       | [C. Next Letter](https://atcoder.jp/contests/code-festival-2016-quala/tasks/codefestival_2016_qualA_c)                             |
| 2022/11/18         | - | 63       | [C. Iroha's Obsession](https://gemuou.hatenablog.com/entry/2022/11/18/093332)                             |
| 2022/11/18         | - | 65       | D. Card Eater                             |
| 2022/11/18         | <ul><li> [ ] </ul> | 67       | [D. Christmas]()                             |


# 解けなかった問題メモ
（70以降やり方見直し）
- どうしたら解法を思いつけるようになるか

## 71 C. Linear Approximation
https://atcoder.jp/contests/abc102/tasks/arc100_a
マンハッタン距離の最小化。
マンハッタン距離 := 各座標の二点間の差の絶対値の総和。
マンハッタン距離が最小になるのは中央値の時。
証明: [URL](https://yamakasa3.hatenablog.com/entry/2018/07/02/041604)。場合分けが大変そう。

## 73 C. Strange Bank
https://atcoder.jp/contests/abc099/tasks/abc099_c
払える最大のお金から払っていく貪欲法だとアウト。
14 円のとき、高い硬貨から払うと 9 + 1 + 1 + 1 + 1 + 1 = 14 の 6 枚になるが、実際は6 + 6 + 1 + 1 = 14 の 4 枚が最適。

動的計画法で解く。

- 入力がNだけ
- O(N)が間に合うサイズ

入力がNだけの時にNより小さい問題に落とし込んで再帰的に解くのは一般的な発想。
数列っぽい再帰の問題でメモ化しないといけないのは、同じ関数の呼び出しが指数関数的に増えていくから。
f(n)でf(n-1)を2回、f(n-1)でf(n-2)を2回、...を繰り返すとf(n-i)は2^iかい呼び出されることになる。



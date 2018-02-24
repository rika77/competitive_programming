#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
//再帰だと無駄な計算が多いので、メモ化（配列にin）してみる

const long int MAX_N = 200; // nの最大値
const long int  MAX_W = 1000000000; // Wの最大値

// 入力
int  n;
long int W = 0;
long int w[MAX_N], v[MAX_N];

// メモ化テーブル。
// dp[i][j]はi番目以降の品物から重さの和がj以下なるように選んだときの価値の和の最大値を表す。
// -1なら値が未決定であることを表す
long int dp[MAX_N + 1][MAX_W + 1];

// i番目以降の品物から重さの和がj以下なるように選んだときの、
// 取りうる価値の総和の最大値を返す関数
long int rec_dp(int i, int j) {
  if (dp[i][j] != -1) {
    // すでに調べたことがあるならその結果を再利用
    return dp[i][j];
  }
  long int res;
  if (i == n) {
    // 品物がもう残っていないときは、価値の和の最大値は0で確定
    res = 0;
  } else if (j < w[i]) {
    // 残りの容量が足りず品物iを入れられないので、入れないパターンだけ処理
    res = rec_dp(i + 1, j);
  } else {
    // 品物iを入れるか入れないか選べるので、両方試して価値の和が大きい方を選ぶ
    res = max(
        rec_dp(i + 1, j),
        rec_dp(i + 1, j - w[i]) + v[i]
    );
  }
  // 結果をテーブルに記憶する
  return dp[i][j] = res;
}

int main() {
 scanf("%d %ld", &n, &W);
 for (int i=0;i<n;i++) {
	scanf("%ld %ld", &v[i], &w[i]);
	} 

  memset(dp, -1, sizeof(dp)); // メモ化テーブルを-1で初期化　以下のforループと等価
//  for (int i = 0; i < MAX_N + 1; i++)
//    for (int j = 0; j < MAX_W + 1; j++)
//      dp[i][j] = -1;
  
  // 0番目以降で容量W以下の場合の結果を表示する
  cout << rec_dp(0, W) << endl;
}

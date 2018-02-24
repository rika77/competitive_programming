//桁DP
//これ以降どんな数にしても条件を満たす

//さてmemorizeしよう。
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string N;	//上限の数字
int D;

int dp[1000][2][1001];

//DPは再帰...なのか...
//下のように、引数を関数呼出し時に設定するようなやつをdefault引数というらしい。
int rec(unsigned int k=0, bool flag = true, int sum = 0) {
	//終了条件
	if (sum > D) return 0;	//これ以上桁を落ちても解は0
				//sumって各桁の数の和ね。

	if (k == N.size()) {	//最後の桁まで見た時。
		return sum==D;	//trueなら++resだなぁ
	}


	//default引数は内部で宣言できる
	//まず最上位の桁から見ていく
	int x = N[k] - '0';	//char -> int	
	//flagは制限。
	//ex.151=>(x=1,true,r=1)
	int r = (flag ? x : 9);
	
	//参照渡し
	int &res =dp[k][flag][sum];
	if (~res) return res;
	res = 0;

	//rまで遷移する
	//0**, 1**
	//i=0 res+=rec(1,false( 一個前の桁が上限より1少ないから9まで見れる！),今見た桁の和を足す
	for (int i=0;i<=r;++i) {
		res += rec(k+1, flag && i==r, sum + i);
	}


	return res;
}

int main() {
	cin >> N >> D;

	memset(dp, -1, sizeof(dp));
	cout << rec() << endl;
	return 0;
}	

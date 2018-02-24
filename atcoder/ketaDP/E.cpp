//桁DP
//これ以降どんな数にしても条件を満たす
//メモ化

#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int D;
string N;

long long int dp[1000][2][1001];

//DPは再帰...なのか...
//下のように、引数を関数呼出し時に設定するようなやつをdefault引数というらしい。
int rec(unsigned int k=0, bool flag = true, int sum = 0) {
	//終了条件
	//これ以上桁を落ちても解は0
				//sumって各桁の数の和ね。
	
	//最後の桁まで見て、割り切れれば1を足す
	if (k == N.size()) {	//最後の桁まで見た時。
		return sum%D==0;	//trueなら++resだなぁ
	}


	//default引数は内部で宣言できる
	//まず最上位の桁から見ていく
	int x = N[k] - '0';	//char -> int	
	//flagは制限。
	//ex.151=>(x=1,true,r=1)
	int r = (flag ? x : 9);
	
	//参照渡し
	long long int &res =dp[k][flag][sum];
	if (~res) return res%1000000007;
	res = 0;

	//rまで遷移する
	//0**, 1**
	//i=0 res+=rec(1,false( 一個前の桁が上限より1少ないから9まで見れる！),今見た桁の和を足す
	for (int i=0;i<=r;++i) {
		res += rec(k+1, flag && i==r, sum + i);
	}


	return res%1000000007;
}

int main() {
	scanf("%d", &D);
	
	scanf("%s", &n  
	memset(dp, -1, sizeof(dp));
	cout << rec() - 1 << endl;
	return 0;
}	

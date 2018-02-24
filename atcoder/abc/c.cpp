#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;


//at last, subに全て(N文字の文字列)入ってる
string str = "abc";
void print(int N,string sub){
	if (!N) cout << sub << endl;
	else {
	rep(i,3){
	print(N-1,sub+str[i]);
	}
	}
}
	

int main(){
	int n;
	cin >> n;
	print(n,"");
	return 0;
}

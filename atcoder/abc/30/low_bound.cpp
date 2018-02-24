#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
#include<set>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(7);
	vector<int>::iterator it = lower_bound(v.begin(),v.end(),2);
	//itから始めるみたいなのも出来るかな？
	it = lower_bound(it,v.end(),1);
	//出来ました！
	cout << *it << endl; //"it"の出力は出来ない。"*it"のみ可能
	return 0;
}

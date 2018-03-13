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
int main(){
	string s;
	cin >> s;
	int l = s.size();
	int num = pow(2.0, l-1);
	ll ans = 0;
	rep(i,num){
		bitset<9> sub(i);
		string bi_sub = sub.to_string();
		//先頭=10-l,長さl-1切り取る
		string bi = bi_sub.substr(10-l,l-1);
		//cout << bi << endl;	
		int head = 0,len=1;
		int j=0;
		while(head <= l-1){
			while(bi[j]=='0'&&j<=l-1){
			 len++;
			 j++;
			}
			ll sum = stoll(s.substr(head,len));
			//cout << sum <<" " <<  len << endl;
			ans += sum;
			head += len;
			j++;
			len = 1;
		}
	}
	cout << ans << endl;

}

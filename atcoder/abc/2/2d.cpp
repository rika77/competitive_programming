#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	bool con[15][15] = {};
	int n, m, x, y;
	cin >> n >> m;
	for(int i = 0; i < m; ++i){
		cin >> x >> y;
		con[x - 1][y - 1] = con[y - 1][x - 1] = true;
	}
 	//配列にtrue入れる。
	//議員xとyが知り合いなら、x-1,y-1をtrueにする。
	
	int ans = 1;
	//bit shift 例えばn=4なら、16始まり
	for(int S = 1 << n; --S; ){
		int t = bitset<32>(S).count();	//多分各桁足し合わせ？
		if(t <= ans){ continue; }
 		//今までよりも大きいsumなので考える価値がある
		bool ok = true;
		for(int i = 1; i < n; ++i)
		for(int j = 0; j < i; ++j){
		//xとyが同時に派閥に存在する(1&1&1)のに、xとyが知り合いでない(1)

			if((S >> i & S >> j & 1) && !con[i][j]){
			//if((S >> i & S >> j & 1) && !con[i][j]){
			//cout << "false" << i << j << (S >> i & S >> j & 1) << endl;	
			ok = false; //一回でも上記にひっかかると、だめらしい。
			//1ってほんとに1か。0001みたいな。
			}
//		else cout << "good" << endl;
		}
		if(ok){ ans = t; }
	}
	cout << ans << endl;
}

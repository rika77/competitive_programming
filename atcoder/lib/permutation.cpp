#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	const int N = 3;
	vector<int> v(N);	//size = N指定
	//iota 1,2,3...と連続したnumを入れたい時に使える
	//$3がスタートの数字
	iota(v.begin(), v.end(), 2);
	swap(v[1],v[0]);
	do {
		for (auto x:v) cout << x << " ";
		cout << endl;
	} while (next_permutation(v.begin(), v.end()));
	return 0;
}	

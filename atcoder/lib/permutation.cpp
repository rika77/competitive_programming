#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	const int N = 3;
	vector<int> v(N);	//size = N����
	//iota 1,2,3...��Ϣ³����num�����줿�����˻Ȥ���
	//$3���������Ȥο���
	iota(v.begin(), v.end(), 2);
	swap(v[1],v[0]);
	do {
		for (auto x:v) cout << x << " ";
		cout << endl;
	} while (next_permutation(v.begin(), v.end()));
	return 0;
}	

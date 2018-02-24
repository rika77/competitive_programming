#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

const int INF = 2e9;

int main() {
	int n;
	cin >> n;
	int a;
	int min_dis,min_val;
	min_dis = min_val = INF;

	int now_dis = 0;
 
	for (int i=0;i<n;i++) {
	cin >> a;
	if (a < min_val) {
	//aが最小値疑惑
	min_val = a;
	now_dis = 1;
	min_dis = INF;
	}
	else if (a == min_val) {
	//aがもっかいでてきた！
	//now_disは再度1にresetしなきゃ
	min_dis = min(min_dis,now_dis);
	now_dis = 1;
	}
	else {
	now_dis++;
	}  
	}
	cout << min_dis << endl;
	return 0;
}


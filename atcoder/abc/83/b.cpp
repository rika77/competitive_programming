#include<iostream>
using namespace std;

int main(){
	int n,a,b;
	int answer=0;
	cin >> n >> a>>b;
	for (int i=1;i<=n;i++) {
	int tmp = i;
	int keta_sum = tmp%10;	//まずひとけた目
	while (tmp >= 10) {
	tmp /= 10;
	keta_sum += tmp%10;
	}
	if (a <= keta_sum && keta_sum <= b) {
	answer += i;
	}
	}

	cout << answer << endl;
	return 0;
}

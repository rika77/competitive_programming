#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n,x;	//xはvectorに入れる際に使う変数
	vector<int> v;
	scanf("%d", &n);
	
	for (int i = 0; i< n;i++) {
	scanf("%d",x);
	v.push_back(x);
	}

	printf("%d\n", v.begin());
	printf("%d\n", v.

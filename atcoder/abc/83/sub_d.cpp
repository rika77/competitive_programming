#include<iostream>
//なんだかbit演算せずにいけそうな雰囲気が...
#include<algorithm>
#include<string>
using namespace std;

int main(){
	string n;
	cin >> n;
	int sub_ans;
	int len = (int)n.size();
	cout << "len " << len << endl;
	int ans = len;
	for (int i=0;i<len-1;i++) {
	if (n[i]!=n[i+1]) {
	sub_ans = max(i+1, len-i-1);
	ans = min(ans, sub_ans);
	}
		}

	cout << ans << endl;
	return 0;
}
	


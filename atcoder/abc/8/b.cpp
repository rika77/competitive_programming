#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
using namespace std;

vector<string> name;
string tmp;
int main(){
	int n;
	cin >> n;
	int cnt[50]={};
	int k=0;
	for (int i=0;i<n;i++) {
	cin >> tmp;
	k = 0;
	for (;k<(int)name.size(); ++k) {
	if (name[k]==tmp) {
	++cnt[k];
	break;
	}}
	//見つからなかったら、最後尾に追加
	if (k == (int)name.size()) {
	name[k+1] = tmp;
	}
	}

	//max値を格納するやつ
	int maxi = 1;
	int k_max = 0;
	k = 0;
	for  (;k<(int)name.size();++k) {
	maxi = max(maxi, cnt[k]);
	k_max = k;
	}
	cout << name[k_max] << endl;
	return 0;
} 
	

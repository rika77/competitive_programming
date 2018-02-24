#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a;
	map<int,int> votes;
	for (int i=0;i<n;i++) {	
	cin >> a;
	++votes[a];
	}

	int cnt=0;
	for (auto &item: votes) {
	if (item.second < item.first) {
	cnt += item.second;
	}
	else if (item.first < item.second) {
	cnt += item.second - item.first;
	}
	}
	cout << cnt << endl;
	return 0;
}

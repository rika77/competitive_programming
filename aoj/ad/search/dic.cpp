#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<set>
#include<queue>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	int n;
	string cmd,str;
	set<string> s;

	cin >> n;
	rep(i,n){
	cin >> cmd >> str;
	//�Ǥ⤤�����ɡ��̤�cmd[0]=='i'�ǽ�ʬ...��Ĥ���̤����������ʤΤǡ�
	if(cmd == "insert"){
	s.insert(str);
	}
	else{
		if(s.find(str) != s.end()){
		cout << "yes" << endl;
		}
		else{
		cout << "no" << endl;
		}
	}
	}

	return 0;
}

//cin,coutは遅くて、scanfが速い?
//ライブラリ使っちゃうぞ〜
#include<iostream>
#include<list>
#include<utility> //pair
#include<algorithm>
using namespace std;

int main() {
	list<int> L;	//int type list : L
	
	int n;
	cin >> n;
	pair<string,int> u;
	for(int i=0;i<n;i++) {
	cin >> u.first;
	
	if (u.first[0] == 'i')
	{
	cin >> u.second;
	L.push_front(u.second);
	}
	else if (u.first[6] == 'F')	//4つが区別出来ればよい
	{L.pop_front();
	}
	else if (u.first[6] == 'L')
	{L.pop_back();
	}
	else if (u.first[0] == 'd')
	{
	cin >> u.second;
	for (list<int>::iterator it = L.begin(); it != L.end(); it++){
		if (*it==u.second) {L.erase(it); break;}
	}
	}
	}
	int i=0;	//itは数値としては使えない感じなので..
	for (list<int>::iterator it = L.begin(); it != L.end(); it++){
		if (i++) cout << " ";
		cout << *it;
	}
	cout << endl;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
typedef pair<int,int> P;

priority_queue<int> Q;
int corr[10] = {0, 2, 5, 5,4,5,6,3,7,6};
vector<P> V;


// Pairをsortするときに、２つ目の要素が小さい順にsortしたいので
bool PComp(const P& firstP, const P& secondP) {
	if (firstP.second == secondP.second) {
		return firstP.first > secondP.first;
	} else {
		return firstP.second < secondP.second;
	}
}	

bool cal(int ite, int rest) {

	if (ite >= (int)V.size()) {
		return false;
		// もう数字はないですよ
	}
	int ma = rest/V[ite].second;

	if (rest%V[ite].second == 0) {
		rep(i, ma) {
			// ma回挿入する
			Q.push(V[ite].first);
		}
		return true;
	}

	for (int j = ma -1; j>=0; j--) {
		if (cal(ite+1, rest - j*V[ite].second)) {
			rep(i, j) {
				// j回挿入する
				Q.push(V[ite].first);
			}
			return true;
		}
	}
	return false;

}

int main(){
	int n,m;
	cin >> n>>m;
	rep(i,m) {
		int a;
		cin >> a;
		V.push_back(P(a, corr[a]));
		// first : 数字
		// second : それを作るのに必要なマッチの本数
	}
	sort(V.begin(), V.end(), PComp);

	if (cal(0, n)) {
		// 全てここに入ってくれるはず
		while(!Q.empty()) {
			int x = Q.top(); Q.pop();
			cout << x;
		}
		cout << endl;
	}
}



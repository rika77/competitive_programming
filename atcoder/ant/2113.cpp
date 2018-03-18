#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
typedef pair<int,int> P;
int main(){
	//グラフっぽく、隣接リストを作成->O(12)で探索可能
	//cin >> pair(a,b)
	//長さnのbitset
	//i,j bi[i]もbi[j]も1なら隣接リスト探索し、あれば続けて、なければ次のbitsetへ。
	//最後まで行ったら、その1の個数を入れて-> count
	//そのmaを取る
	
	int n,m;
	cin >> n>>m;
	vector<int> adj[n];

	int ma = 0;
	int x,y;
	rep(i,m){
		cin >> x >> y;
		x--; y--;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	int num = pow(2.0, n);

	rep(i,num){
		bitset<12> sub(i);
		string bi_sub = sub.to_string();
		string bi = bi_sub.substr(12-n,n);
		//0101を探索
		bool flagg = 1;
		rep(j,n){
			FOR(k,j+1,n){
				if (bi[j]=='1'&&bi[k]=='1'){
					bool flag = 0;
					rep(l,adj[j].size()){
						if (adj[j][l] == k) {
							flag = 1;	//found
							break; //loopから脱出
						}
					}
					//多重ループの抜け方:ループ変数を変えちゃう。
					if (!flag){
						//知り合いじゃないので、このiはだめ
						flagg = 0;
						k = n - 1;
						j = n - 1;
					}
				}
			}
		}
		if (flagg) {
		int cnt = sub.count();
		//cout << bi << " " << cnt << endl;
		ma = max(ma, cnt);
		}
	}

	cout << ma << endl;
}

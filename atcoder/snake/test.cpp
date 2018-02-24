//入力に変な制限があるのがポイント
//H,W = 3,7,11,...,39
//*と@はiとjが共に奇数であるときのみ発生(配列番号は偶数)


//draw snake B
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
 
int n, m;
char g[101][101];
vector<pair<int, int> > q; //(x,y)に使うことが多い...座標かな？？
 
void add(int x, int y) {
	q.push_back(make_pair(x, y));
}
 
int main() {
	scanf("%d%d", &n, &m);
	int tot = 0;
	for(int i=0;i<n;i++) {
		scanf("%s", g[i]);
		for(int j=0;j<m;j++) 
			if(g[i][j]=='*') tot++;	//tot = the number of city
	}
	q.clear();	//initialize
	
	for(int i=0;i<n;i++) add(i, 0);
	// (0,0)(1,0)(2,0)(3,0)(4,0)(5,0)(6,0) 
	add(n-1, 1); //(6,1)
	for(int i=n-1;i>=0;i-=4) {
		for(int j=2;j<m;j++) add(i, j);
		//(6,2)(6,3)(6,4)(6,5)(6,6)
		add(i-1, m-1); //(5,6)
		for(int j=m-1;j>1;j--) add(i-2, j);
		//(4,6)(4,5)(4,4)(4,3)(4,2)
		if(i>2) add(i-3, 2); //(3,2)
		//(2,2)(2,3)(2,4)(2,5)(2,6)
		//(1,6) (0,6)(0,5)(0,4)(0,3)(0,2)(0,1)
	}
	
	add(0, 1);
	int len = (int)q.size();
	for(int i=0;i<len;i++) add(q[i].first, q[i].second);
	len*=2;
	
	int it = 0;
	while(it<len && g[q[it].first][q[it].second] != '@') {
		//printf("%c %d %d\n", g[q[it].first][q[it].second], q[it].first, q[it].second);
		it++;
	}
	while(tot) {
		it++;
		int x = q[it].first, y = q[it].second;
		if (g[x][y]=='.') g[x][y] = '#';
		else tot--;
	}
	for(int i=0;i<n;i++) printf("%s\n", g[i]);
	
	return 0;
}

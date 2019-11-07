#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
typedef pair<int, int> P;


int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main(){

	int h,w;
	cin >> h >> w;
	char m[402][402] = {};
	bool c[402][402] = {};
	fill(c[0],c[402],0);

	char a;
	rep(i, h) {
		rep(j, w) {
			cin >> a;
			m[i][j] = a;
		}
	}
	ll all = 0;
	rep(i, h) {
		rep(j, w) {
			if (!c[i][j]) {
				ll white=0, b=0;
				if (m[i][j] == '.') {
					white++;
				} else {
					b++;
				}
				c[i][j]=1;
				queue<P> Q;
				Q.push(P(i,j));

				while(!Q.empty()) {
					P p = Q.front(); Q.pop();
					rep(k,4) {
						int x = p.first + dx[k];
						int y = p.second + dy[k];
						// cout << "x " << x << " y " << y << " c " << c[x][y] << endl;
						if ( x>=0 && x<h && y>=0 && y<w && c[x][y] == 0) {
							// ?\cout << "a" << endl;
							if ((m[p.first][p.second]=='.' && m[x][y] == '#') || (m[p.first][p.second]=='#' && m[x][y] == '.')) {
								// cout << "hoge" << endl;
								Q.push(P(x,y));
								c[x][y] = 1;
								if (m[p.first][p.second]=='.' && m[x][y] == '#') {
									b++;
								} else {
									white++;
								}
							}
						} 
					}
				}
				// cout << "b " <<b << " w " << white << endl;
				all += b*white;
			}

		}
	}
	cout << all << endl;
}


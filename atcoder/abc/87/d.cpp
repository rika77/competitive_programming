#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define MAX 100000
typedef long long ll;

bool visit[MAX];
int d[MAX];
typedef pair<int,int> P;
vector<P> G[MAX];

void dfs(int node, int dis){
	if (visit[node]){
		if (d[node] != dis){
		cout << "No" << endl;
		exit(0);	//�ץ���ཪλ
		}
		return;	//ˬ�줿���Ȥ����뤱�ɡ�̷��������Ƥʤ���
	}
	
	visit[node] = true;
	d[node]= dis;
	rep(i,G[node].size()){
	dfs(G[node][i].first, dis + G[node][i].second);
	}
}
	


int main(){
	int n,m;
	cin >> n>>m;
	int l,r,d;
	
	//adj list�κ���
	rep(i,m){
	cin >>l>>r>>d;
	l--; r--;
	G[l].push_back(P(r,d));
	G[r].push_back(P(l,-d));
	}
	
	//���θĿ�����������ͥ��õ������̷�⤬�ʤ���õ��
	//ˬ�줿���Ȥ��ʤ���С�������������Ȥ���õ������
/*	rep(i,n){
	visit[i]=0;
	}
*/
	rep(i,n){
		if(!visit[i]) dfs(i,0);
	}
	
	cout << "Yes" << endl;
	return 0;
}

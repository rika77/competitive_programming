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
typedef long long ll;
typedef pair<string,string> P;
// cout << "Case #" << i+1 << ": " << ans << endl;
int main(){
	int t;
	cin >> t;
	rep(i,t){
		vector<P> v;
		int n;
		string a,b;
		cin >> n;
		map<string,int> from;
		map<string,int> to;

		rep(j,n){
			cin >> a>>b;
			v.push_back(P(a,b));
			from[a]++;
			to[b]++;
		}
		string start,next_from;
		for (auto &item: from){
			if (!to[item.first]) {
				start = item.first;
				auto found = find_if(v.begin(), v.end(),
						[start](P p) -> bool {
						return p.first == start;
						}
						);
				cout << "Case #" << i+1 << ": " << (*found).first << "-" <<(*found).second;
				next_from = (*found).second;
				v.erase(found);
				continue;
			}
		}

		while(!v.empty()){

			auto result = find_if(v.begin(), v.end(), 
					[next_from](P p) -> bool {
					return p.first == next_from;
					}
					);
			cout << " " << (*result).first << "-" << (*result).second;
			next_from = (*result).second;
			v.erase(result);
		}
		cout << endl;
	}
	return 0;
}
	


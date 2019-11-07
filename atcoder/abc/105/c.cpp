#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

string to_binString(int val)
{
    if( !val )
        return string("0");
    string str;
    while( val != 0 ) {
        if( (val & 1) == 0 )  // val は偶数か？
            str.insert(str.begin(), '0');  //  偶数の場合
        else
            str.insert(str.begin(), '1');  //  奇数の場合
        val >>= 1;
    }
    return str;
}

int main(){
	// keta find
	int n;
	cin >> n;

	int k = 1;
	int tmp;
	if (n>=0) {
		tmp = n+2;
	}
	else {
		tmp = n - 5;
		tmp = tmp * (-1);
	}					
	while (tmp >= 2) {
			k++;
			tmp = tmp/2;
	}
	 cout << k << endl;
	int ans = 0;


	for (int bit = (1<<(k-1)); bit < (1<<k); bit++) {
		int sum = 0;
		for (int i = 0; i < k; i++) {
			if (bit & (1<<i)) {
				sum += pow(-2, i);
			}
		}

		if (sum == n) {
			ans = bit;
			break;
		}
	}
	cout << ans << endl;
	string hoge  = to_binString(ans);
	cout << hoge << endl;
	// nisinnsuuuuu
	
	
	return 0;
}

	
			



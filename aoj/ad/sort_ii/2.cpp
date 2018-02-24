#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int n,x;
	scanf("%d %d",&n,&x);
	char s[n];
	scanf("%s", s);

	int sum=0;
	int t;
	int mini;
	for (int i=0;i<n;i++)
	{scanf("%d", &t);
	 if (s[i]=='0') sum+=t;
	else {mini=min(t,x); sum+=mini;}
	}

	printf("%d\n", sum);
	return 0;
}
	

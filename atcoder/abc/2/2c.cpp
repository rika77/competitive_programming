#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath> //fabs
using namespace std;

int main(){
	double xa,ya,xb,yb,xc,yc;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;

	double s = ((xb-xa)*(yc-ya) - (yb-ya)*(xc-xa))/2.0;
	double ans = fabs(s);
	printf("%.1lf\n", ans);	//まあちゃんと例と一緒じゃないと誤差があやしいとな
	return 0;
}
	

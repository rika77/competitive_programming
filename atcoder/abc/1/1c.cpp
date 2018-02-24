#include<iostream>
using namespace std;

int main(){
	double a, b;
	cin >> a >> b;
	a /= 10.0;
	b /= 60.0;

	if (b < 0.25) {
	cout << "C " << 0 << endl;
	return 0;
	}

	if (a < 11.25) cout << "N ";
	else if (a < 33.75) cout << "NNE ";
	else if (a < 56.25) cout << "NE ";
	else if (a < 78.75) cout << "ENE ";
	else if (a < 101.25) cout << "E ";
	else if (a < 123.75) cout << "ESE ";
	else if (a < 146.25) cout << "SE ";
	else if (a < 168.75) cout << "SSE ";
	else if (a < 191.25) cout << "S ";
	else if (a < 213.75) cout << "SSW ";
	else if (a < 236.25) cout << "SW ";
	else if (a < 258.75) cout << "WSW ";
	else if (a < 281.25) cout << "W ";
	else if (a < 303.75) cout << "WNW ";
	else if (a < 326.25) cout << "NW ";
	else if (a < 348.75) cout << "NNW ";
	else cout << "N ";
	
	if (b < 1.55) {cout << 1 << endl; return 0;}
	if (b < 3.35) {cout << 2 << endl; return 0;}
	if (b < 5.45) {cout << 3 << endl; return 0;}
	if (b < 7.95) {cout << 4 << endl; return 0;}
	if (b < 10.75) {cout << 5 << endl; return 0;}
	if (b < 13.85) {cout << 6 << endl; return 0;}
	if (b < 17.15) {cout << 7 << endl; return 0;}
	if (b < 20.75) {cout << 8 << endl; return 0;}
	if (b < 24.45) {cout << 9 << endl; return 0;}
	if (b < 28.45) {cout << 10 << endl; return 0;}
	if (b < 32.65) {cout << 11 << endl; return 0;}
	else {cout << 12 << endl; return 0;}
}

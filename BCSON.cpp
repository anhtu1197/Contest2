#include<bits/stdc++.h>
#define F(i, n, m) for (int i = n; i <= m; i++)
#define Fa(i, n, m) for (int i = n; i>= m; i--)
#define ll long long
using namespace std;

int m, n;
int a[1002][1002];

void Son() {
	cin >> n >> m;
	F(i, 1, n) {
		F(j, 1, m) {
			cin >> a[i][j];
		}
	}
	int s = 0;
	F(i, 1, n) {
		F(j, 1, m) {
			if (a[i][j] > 0) s++; // son dinh
			if (a[i][j] > a[i][j - 1]) s += a[i][j] - a[i][j - 1]; // son mat trai
			if (a[i][j] > a[i][j + 1]) s += a[i][j] - a[i][j + 1]; // son mat phai
			if (a[i][j] > a[i - 1][j]) s += a[i][j] - a[i - 1][j]; // son mat tren
			if (a[i][j] > a[i + 1][j]) s += a[i][j] - a[i + 1][j]; // son mat duoi
		}
	}	
	cout << s << endl;
	
}

main () {
	Son();
}


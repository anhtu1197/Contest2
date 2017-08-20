#include<bits/stdc++.h>
#define F(i, n, m) for (int i = n; i <= m; i++)
#define Fa(i, n, m) for (int i = n; i>= m; i--)
#define ll long long
using namespace std;

const long long MOD = 1000000007;
unordered_map<long long, long long> Fib;


long long fib(long long n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
		Fib[n] = ((fib((n + 1) / 2) * fib(n / 2)) + (fib((n - 1) / 2) * fib((n - 2)/ 2))) % MOD;
}


main () {
	int k;
	cin >> k;
	F(j, 1, k) {
		ll n;
		cin >> n;
		cout << fib (n) << endl;
	}

}


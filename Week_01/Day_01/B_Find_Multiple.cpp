#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MOD 1000000007
#define int long long int

#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define B begin()
#define E end()
#define all(x) x.B, x.E

int32_t main()
{
	fastIO;

	int a, b, c;
	cin >> a >> b >> c;

	for (int i = a; i <= b; i++) {
		if (i % c == 0) {
			cout << i;
			return 0;
		}
	}

	cout << -1;

	return 0;
}
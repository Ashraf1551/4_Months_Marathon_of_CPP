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

	int a, b; cin >> a >> b;

	if (a >= b) cout << 0;

	else {
		int cnt = 0;
		for (int i = a; i <= b; i++) {
			cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}
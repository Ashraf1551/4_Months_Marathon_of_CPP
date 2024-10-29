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

void solve()
{
	int n;
	cin >> n;
	map<pair<string, string>, bool> mp;
	for (int i = 1; i <= n; i++) {
		string a, b;
		cin >> a >> b;
		mp[ { a, b }] = true;
	}
	cout << mp.size() << '\n';
}

int32_t main()
{
	fastIO;

	int t = 1;
	// cin >> t;
	while (t--)
		solve();
	return 0;
}
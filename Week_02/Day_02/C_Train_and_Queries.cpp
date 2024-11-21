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
	int n, m;
	cin >> n >> m;
	map<int, set<int>> mp;

	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		mp[x].insert(i);
	}

	for (int i = 1; i <= m; i++) {
		int l, r;
		cin >> l >> r;

		if ((mp.find(l) == mp.end()) || (mp.find(r) == mp.end()))
		{
			cout << "NO" << '\n';
		} else {
			int st = *mp[l].begin();
			int end = *mp[r].rbegin();
			if (end > st) {
				cout << "YES" << '\n';
			} else {
				cout << "NO" << '\n';
			}
		}
	}
}

int32_t main()
{
	fastIO;

	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;
}
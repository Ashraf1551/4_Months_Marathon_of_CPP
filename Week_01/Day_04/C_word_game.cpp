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
	int n, m = 3;
	cin >> n;

	map<string, vector<int>> mp;

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			string s;
			cin >> s;
			mp[s].push_back(i);
		}
	}

	vector<int> ans(m + 1);

	for (auto [x, y] : mp) {
		vector<int> v = y;
		if (v.size() == 1) {
			ans[v[0]] += 3;
		}
		if (v.size() == 2) {
			ans[v[0]]++;
			ans[v[1]]++;
		}
	}

	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	cout << '\n';
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
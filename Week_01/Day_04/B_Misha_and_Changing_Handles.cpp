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

	int n;
	cin >> n;
	map<string, string> ans, has;
	for (int i = 1; i <= n; i++) {
		string a, b;
		cin >> a >> b;

		if (has.find(a) != has.end()) {
			string s = has[a];
			ans[s] = b;

			has.erase(a);

			has[b] = s;
		} else {
			ans[a] = b;
			has[b] = a;
		}
	}

	cout << ans.size() << '\n';
	for (auto [x, y] : ans) {
		cout << x << " " << y << '\n';
	}

	return 0;
}
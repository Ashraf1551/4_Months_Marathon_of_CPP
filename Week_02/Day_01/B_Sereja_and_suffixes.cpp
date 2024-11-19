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

	int n, m;
	cin >> n >> m;
	vector<int> v(n + 1), cnt(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}
	set<int> s;

	for (int i = n; i >= 1; i--) {
		s.insert(v[i]);
		cnt[i] = s.size();
	}

	for (int i = 1; i <= m; i++) {
		int pos;
		cin >> pos;
		cout << cnt[pos] << '\n';
	}

	// int n, m;
	// cin >> n >> m;
	// vector<int> v(n + 1);

	// for (int i = 1; i <= n; i++) {
	// 	cin >> v[i];
	// }
	// for (int i = 1; i <= m; i++) {
	// 	int pos; cin >> pos;
	// 	set<int>s;
	// 	for (int j = pos; j <= n; j++) {
	// 		s.insert(v[j]);
	// 	}
	// 	cout << s.size() << '\n';
	// }

	return 0;
}
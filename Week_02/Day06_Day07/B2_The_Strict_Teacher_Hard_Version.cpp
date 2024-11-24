#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MOD 1000000007
#define int long long int

#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define B begin()
#define E end()
#define all(x) x.B, x.E

void solve() {
	int n, m, q;
	cin >> n >> m >> q;
	vector<int> t(m);
	for (int i = 0; i < m; i++)
		cin >> t[i];

	sort(t.begin(), t.end());

	while (q--)
	{
		int david;
		cin >> david;

		if (david < t[0]) {
			cout << t[0] - 1 << '\n';
			continue;
		}

		if (david > t[m - 1]) {
			cout << n - t[m - 1] << '\n';
			continue;
		}

		auto it = lower_bound(t.begin(), t.end(), david);
		auto jt = it;
		jt--;

		int left = *jt, right = *it;
		int mid = (right + left) / 2;
		cout << min(abs(mid - left), abs(mid - right)) << '\n';
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
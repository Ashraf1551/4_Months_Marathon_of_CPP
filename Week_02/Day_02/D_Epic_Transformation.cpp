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
	int n; cin >> n;
	map<int, int> mp;

	for (int i = 1; i <= n; i++) {
		int x; cin >> x;
		mp[x]++;
	}
	priority_queue<int> pq;
	for (auto [x, y] : mp) {
		pq.push(y);
	}

	while (!pq.empty()) {
		if (pq.size() < 2) {
			break;
		}
		int x, y;
		x = pq.top();
		pq.pop();

		y = pq.top();
		pq.pop();
		x--, y--;
		if (x >= 1) {
			pq.push(x);
		}
		if (y >= 1) {
			pq.push(y);
		}
	}

	int ans = 0;
	while (!pq.empty()) {
		ans += pq.top();
		pq.pop();
	}

	cout << ans << '\n';
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
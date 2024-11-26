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
	int n, m; cin >> n >> m;
	vector<int> a(n), b(m);

	for (auto &x : a) cin >> x;
	for (auto &x : b) cin >> x;

	int l = 0, r = 0, cnt = 0;

	while (r < m) {
		if (l < n && a[l] < b[r]) {
			cnt++, l++;
		} else {
			cout << cnt << " ";
			r++;
		}
	}

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

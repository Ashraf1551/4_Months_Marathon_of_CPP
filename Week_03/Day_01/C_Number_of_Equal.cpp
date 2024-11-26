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
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for (auto &x : a) cin >> x;
	for (auto &x : b) cin >> x;

	int l = 0, r = 0;
	int ans = 0;

	while (l < n && r < m) {
		int curr = a[l], cnt1 = 0, cnt2 = 0;
		while (l < n && a[l] == curr) {
			cnt1++, l++;
		}
		while (r < m && curr > b[r]) {
			r++;
		}
		while (r < m && b[r] == curr) {
			cnt2++, r++;
		}
		ans += (1LL * cnt1 * cnt2);
	}

	cout << ans << '\n';

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
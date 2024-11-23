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
	int n;
	cin >> n;

	vector<int> v(n);
	for (auto &x : v) cin >> x;

	if (n < 4) {
		cout << -1 << '\n';
	} else {
		int mn = 1, mx = n;
		int l = 0, r = n - 1, flag = 1;
		while (l < r) {
			if (v[l] == mn) {
				l++; mn++;
			} else if (v[l] == mx) {
				l++; mx--;
			} else if (v[r] == mn) {
				mn++; r--;
			} else if (v[r] == mx) {
				mx--; r--;
			} else {
				cout << l + 1 << " " << r + 1 << '\n';
				flag = 0;
				break;
			}
		}
		if (flag) cout << -1 << '\n';
	}
}

int32_t main() {
	fastIO;

	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;
}

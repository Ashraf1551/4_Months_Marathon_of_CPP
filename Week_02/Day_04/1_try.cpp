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
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	for (int i = 0; i < n; i ++) {
		int x; string s;
		cin >> x >> s;

		for (int j = 0; j < x; j++) {
			if (s[j] == 'D') {
				if (v[i] > 9) {
					v[i] = 0;
				}
				v[i]++;
			} else {
				if (v[i] == 0) {
					v[i] = 9;
				}
				v[i]--;
			}
		}
	}
	for (auto &val : v) {
		cout << val << " ";
	}
	cout << '\n';
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
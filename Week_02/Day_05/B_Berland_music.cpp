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

	for (auto &x : v) cin >> x;

	string s; cin >> s;

	map<int, int> like, dlike;

	for (int i = 0; i < n; i++) {
		if (s[i] == '0')
			dlike[v[i]] = i;
		else
			like[v[i]] = i;
	}
	int  num = 1;
	for (auto [x, y] : dlike) {
		v[y] = num++;
	}
	for (auto [x, y] : like) {
		v[y] = num++;
	}
	for (auto &x : v) {
		cout << x << " ";
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
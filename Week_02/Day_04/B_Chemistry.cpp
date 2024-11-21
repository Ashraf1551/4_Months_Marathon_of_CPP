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
	int n, k; string s;
	cin >> n >> k >> s;

	map<char, int> mp;
	for (auto ch : s) {
		mp[ch]++;
	}
	int odd = 0;
	for (auto [key, val] : mp) {
		if (val & 1) {
			odd++;
		}
	}
	if (odd - 1 < 0) {
		odd = 0;
	} else {
		odd = odd - 1;
	}
	if (k >= odd && k <= n) {
		yes;
	}
	else {
		no;
	}
	// if (k >= odd-1) yes; else no
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
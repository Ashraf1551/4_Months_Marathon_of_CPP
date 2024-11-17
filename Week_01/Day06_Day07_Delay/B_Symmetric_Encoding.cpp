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
	string s; cin >> s;

	set<char>st;

	for (int i = 0; i < n; i++) {
		st.insert(s[i]);
	}
	map<char, char> mp;
	auto rit = st.rbegin();

	for (auto it = st.begin(); it != st.end(); it++) {
		mp[*it] = *rit;
		++rit;
	}
	for (int i = 0; i < n ; i++) {
		cout << mp[s[i]];
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
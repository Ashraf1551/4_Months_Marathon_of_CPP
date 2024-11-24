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
	string s;
	cin >> s;

	set<int> st;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		st.insert(x);
	}

	string c;
	cin >> c;
	sort(all(c));

	int idx = 0;
	for (auto it : st) {
		s[it - 1] = c[idx];
		idx++;
	}

	cout << s << endl;
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
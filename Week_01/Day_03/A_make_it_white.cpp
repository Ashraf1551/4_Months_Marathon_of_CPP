#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MOD 1000000007
#define int long long int

#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define B begin()
#define E end()
#define all(x) x.B, x.E

void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int firstPos = -1, lastPos = -1;
	firstPos = s.find('B');
	lastPos = s.rfind('B');
	int ans = lastPos - firstPos + 1;
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
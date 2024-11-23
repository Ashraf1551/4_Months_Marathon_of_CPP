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
	priority_queue<int> pq;
	int ans = 0;
	while (n--) {
		int x; cin >> x;
		if (x == 0 && pq.size() == 0 ) continue;
		if (x > 0) pq.push(x);
		else {
			ans += pq.top();
			pq.pop();
		}
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
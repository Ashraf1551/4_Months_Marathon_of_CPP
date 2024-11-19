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

int32_t main()
{
	fastIO;

	int n;
	cin >> n;
	multiset<int> ml;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		ml.insert(x);
	}
	int ans = 0, problem = 1;

	while (!ml.empty()) {
		auto LB = ml.lower_bound(problem);
		if (LB != ml.end()) {
			ans++;
			ml.erase(LB);
		} else {
			break;
		}

		problem++;
	}

	cout << ans << '\n';
	return 0;
}
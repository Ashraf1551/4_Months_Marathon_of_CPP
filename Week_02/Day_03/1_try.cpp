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

int32_t main()
{
	fastIO;

	string s, t;
	cin >> s >> t;

	int ans = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] != t[i]) {
			ans++;
		}
	}
	cout << ans << '\n';
	return 0;

}
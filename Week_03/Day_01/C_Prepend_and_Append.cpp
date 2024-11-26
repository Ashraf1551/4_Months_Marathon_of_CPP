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
	string s;
	cin >> n >> s;

	int l = 0, r = n - 1;

	while (l <= r) {
		if (s[l] != s[r]) {
			l++;
			r--;
			continue;
		} else {
			cout << (r - l) + 1 << '\n';
			return;
		}
	}
	cout << 0 << '\n';

	/*while (l <= r) {
	     if (s[l] == s[r]) {
	        break;
	     }
	     else {
	        ans -= 2;
	        l++, r--;
	     }
	  }
	  cout << ans << '\n';*/
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
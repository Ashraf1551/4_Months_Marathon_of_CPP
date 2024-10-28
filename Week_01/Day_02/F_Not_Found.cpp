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

	string s;
	cin >> s;

	map<char, int> mp;

	for (char c : s) {
		mp[c] = 1;
	}

	for (char c = 'a'; c <= 'z'; c++) {
		if (mp[c] != 1) {
			cout << c << '\n';
			return 0;
		}
	}
	cout << "None" << '\n';

	return 0;
}
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

	int n, m; cin >> n >> m;
	map<string, string> mp;

	for (int i = 0; i < n; i++) {
		string a, b; cin >> a >> b;
		mp[b] = a;
	}
	for (int i = 0; i < m; i++) {
		string a, b; cin >> a >> b;
		b.pop_back();
		cout << a << " " << b << ";" << " " << "#" << mp[b] << '\n';
	}
	// for (auto &it : mp) {
	// 	cout << it.first << " " << it.second << '\n';
	// }

	return 0;

}
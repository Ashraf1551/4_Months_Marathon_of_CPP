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

	int n;
	cin >> n;

	vector<string> names(n);
	set<string> s;

	for (int i = 0; i < n; i++) {
		cin >> names[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		if (s.find(names[i]) == s.end()) {
			cout << names[i] << '\n';
			s.insert(names[i]);
		}
	}

	return 0;

}
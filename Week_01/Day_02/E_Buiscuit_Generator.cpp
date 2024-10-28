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

	int a, b, t; cin >> a >> b >> t;

	cout << floor((t + 0.5) / a) * b;

	return 0;
}
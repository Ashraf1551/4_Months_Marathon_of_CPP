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

	int s, t, count = 0;
	cin >> s >> t;

	for (int a = 0; a <= 100; a++) {
		for (int b = 0; b <= 100; b++) {
			for (int c = 0; c <= 100; c++) {
				if (a + b + c <= s && a * b * c <= t) {
					count++;
				}
			}
		}
	}

	cout << count << endl;
	return 0;
}
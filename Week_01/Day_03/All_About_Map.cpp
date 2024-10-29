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

	map<int, int> mp;
	// mp.insert({ 10, 20 });

	mp[10] = 20;
	mp[2] = 12;
	mp[3] = 15;
	mp[11] = 25;

	// for (auto [key, val] : mp) {
	//     cout << key << "->" << val << '\n';
	// }

	// for (auto it : mp) {
	// 	int key = it.first, val = it.second;
	// 	cout << key << "->" << val << '\n';
	// cout << it.first << "->" << it.second << '\n';
	// }

	// auto it = mp.find(3);
	// cout << it->first << " " << it->second << '\n';

	// if (it == mp.end()) {
	// 	cout << "Key not found" << '\n';
	// } else {
	// 	cout << it->first << " " << it->second << '\n';
	// }

	// auto it = mp.find(10);
	// if (it != mp.end()) {
	// 	mp.erase(it);
	// }

	// for (auto it : mp) {
	// 	int key = it.first, val = it.second;
	// 	cout << key << "->" << val << '\n';
	// cout << it.first << "->" << it.second << '\n';
	// }
	// cout << mp.size() << '\n';
	// cout << mp.empty() << '\n';

	// auto it = mp.begin();
	// it++;
	// cout << it->first << " " << it->second << '\n';

	for (auto it : mp) {
		int key = it.first, val = it.second;
		cout << key << "->" << val << '\n';
	}
	auto it = mp.upper_bound(2);
	cout << it->first << " " << it->second;
	return 0;
}
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
	char c; string s;
	cin >> c >> s;

	if (c == 'g') {
		cout << 0 << '\n';
		return;
	}
	bool flag = false;
	int result = 0, cnt = 0;
	s += s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'g') {
			result = max(result, cnt);
			flag = false;
		}
		if (s[i] == c && !flag) {
			flag = true;
			cnt = 0;
		}
		if (flag) cnt++;
	}
	cout << result << '\n';
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
/*
void solve() {
    int n;
    char ch;
    cin >> n >> ch;
    string s;
    cin >> s;

    if (ch == 'g') {
        cout << 0 << endl;
        return;
    }

    int first = -1;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'g') {
            first = i;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == ch) {
            int count = 0, flag = 0;
            for (int j = i + 1; j < n; j++) {
                count++;
                if (s[j] == 'g') {
                    flag++;
                    break;
                }
            }
            i = i + count;
            if (flag) {
                ans = max(ans, count);
            } else {
                ans = max(ans, count + 1 + first);
            }
        }
    }

    cout << ans << endl;
}
*/
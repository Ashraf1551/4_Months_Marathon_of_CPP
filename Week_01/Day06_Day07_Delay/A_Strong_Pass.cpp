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
    string s;
    cin >> s;

    int idx = -1;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i + 1]) {
            idx = i;
        }
    }

    if (idx == -1) {
        if (s[0] == 'a') {
            cout << ('b' + s) << "\n";
        }
        else {
            cout << ('a' + s) << "\n";
        }
    }
    else {
        char ch = s[idx] + 1;
        if (s[idx] == 'z') { // zzzz, -1 korle zzyz
            ch = s[idx] - 1;
        }
        cout << s.substr(0, idx + 1) + ch + s.substr(idx + 1) << "\n";
    }
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
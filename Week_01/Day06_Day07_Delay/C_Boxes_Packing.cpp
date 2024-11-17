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
    vector<int> v(n);
    map<int, int> mp;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;

    }

    int ans = INT_MIN;
    for (auto &it : mp)
    {
        ans = max(ans, it.second);
    }
    cout << ans;

    return 0;

}
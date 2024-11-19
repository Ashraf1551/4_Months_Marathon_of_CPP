#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    map<int, int> freq;


    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (freq[v[i]] == 1)
        {
            cout << v[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

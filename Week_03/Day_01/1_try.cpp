#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    // Step 1: Count the occurrences of each element in array b
    map<int, int> freqB;
    for (int i = 0; i < m; ++i) {
        freqB[b[i]]++;
    }

    // Step 2: Count pairs
    long long count = 0; // Use long long to avoid overflow
    for (int i = 0; i < n; ++i) {
        if (freqB.find(a[i]) != freqB.end()) {
            count += freqB[a[i]];
        }
    }

    // Output the result
    cout << count << endl;

    return 0;
}

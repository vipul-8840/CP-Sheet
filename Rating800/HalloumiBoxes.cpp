
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> sorted = a;
        sort(sorted.begin(), sorted.end());

        if (k == 1 && a != sorted)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}

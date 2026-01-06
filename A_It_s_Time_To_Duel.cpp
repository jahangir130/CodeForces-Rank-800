#include <bits/stdc++.h>
using namespace std;
// --Jahangir--BUBT_CSE_55_8--//
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        bool liar = false;

        if (sum == n) liar = true;

        for (int i = 0; i + 1 < n; i++) {
            if (a[i] == 0 && a[i + 1] == 0) {
                liar = true;
                break;
            }
        }

        cout << (liar ? "YES\n" : "NO\n");
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
 
// --Jahangir--BUBT_CSE_55_8--//

class BalancedArray {
public:
    void solve() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;

            if ((n / 2) % 2 != 0) {
                cout << "NO\n";
                continue;
            }

            cout << "YES\n";

            int half = n / 2;
            vector<int> a;

            int sumEven = 0, sumOdd = 0;

            for (int i = 1; i <= half; i++) {
                int x = 2 * i;
                a.push_back(x);
                sumEven += x;
            }

            for (int i = 1; i < half; i++) {
                int x = 2 * i - 1;
                a.push_back(x);
                sumOdd += x;
            }

            a.push_back(sumEven - sumOdd);

            for (int x : a) cout << x << " ";
            cout << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    BalancedArray obj;
    obj.solve();

    return 0;
}

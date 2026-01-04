#include <bits/stdc++.h>
using namespace std;
 
// --Jahangir--BUBT_CSE_55_8--//

class LittleFairyPainting {
public:
    long long solve(const vector<long long>& a) {
        unordered_set<long long> s(a.begin(), a.end());
        long long d = s.size();
        long long ans = LLONG_MAX;
        for (long long x : a)
            if (x >= d) ans = min(ans, x);
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    LittleFairyPainting solver;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << solver.solve(a) << '\n';
    }
    return 0;
}

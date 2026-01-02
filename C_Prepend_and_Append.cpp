#include <bits/stdc++.h>
using namespace std;
 
// --Jahangir--BUBT_CSE_55_8--//

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        string s;
        cin >> n >> s;

        int l = 0, r = n - 1;
        while (l < r && s[l] != s[r]) 
        {
            l++;
            r--;
        }

        int ans = r - l + 1;
        if (ans < 0) ans = 0;
        cout << ans << "\n";
    }
    return 0;
}

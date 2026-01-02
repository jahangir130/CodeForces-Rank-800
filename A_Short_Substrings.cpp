 #include<bits/stdc++.h>
 using namespace std;
 // --Jahangir--BUBT_CSE_55_8--//
 int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
     int t;
    cin >> t;
    while (t--) {
        string b;
        cin >> b;
        string a;
        a += b[0];
        for (int i = 1; i < (int)b.size(); i += 2) {
            a += b[i];
        }
        cout << a << '\n';
    }
     return 0;
 }
 
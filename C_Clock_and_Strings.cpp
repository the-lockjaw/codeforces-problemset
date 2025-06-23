#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a > b)
            swap(a, b);
        if (c > d)
            swap(c, d);
        // a < b and c < d
        // x is above ab if x < a || x > b
        bool c_above = c < a || c > b;
        bool d_above = d < a || d > b;
        if (c_above ^ d_above)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

/*
tutorial solution

#include <bits/stdc++.h>

using namespace std;

const int MAX = 200'007;
const int MOD = 1'000'000'007;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string s;
    for (int i = 1; i <= 12; i++) {
        if (i == a || i == b) {s += "a";}
        if (i == c || i == d) {s += "b";}
    }
    cout << (s == "abab" || s == "baba" ? "YES\n" : "NO\n");
}

int main() {
    int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    // solve();
}
*/
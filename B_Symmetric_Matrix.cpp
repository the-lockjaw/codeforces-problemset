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
        int n, m;
        cin >> n >> m;
        bool ans = false;
        for (int i = 0; i < n; i++)
        {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            ans = ans || b == c;
        }
        ans = ans && !(m & 1);
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
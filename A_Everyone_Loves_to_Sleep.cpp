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
        int n, h, m;
        cin >> n >> h >> m;
        int slept_at = h * 60 + m;
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            int minutes = x * 60 + y;
            if (minutes >= slept_at)
                ans = min(ans, minutes-slept_at);
            else
                ans = min(ans, minutes + (24 * 60 - slept_at));
        }
        cout << ans / 60 << " " << ans % 60 << endl;
    }
    return 0;
}
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
        int n;
        cin >> n;
        vector<int> cnt(n);

        long long res = 0;
        int cur = 0;
        
        for (int i = 0; i < n; ++i)
        {
            cin >> cnt[i];
            if (cnt[i] > cur)
                res += cnt[i] - cur;
            cur = cnt[i];
        }

        cout << res - 1 << endl;
    }
    return 0;
}
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if ((v[i] & 1) && (v[i - 1] & 1))
            {
                ans++;
            }
            else if (!((v[i] & 1) || (v[i - 1] & 1)))
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
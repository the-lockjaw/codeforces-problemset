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
        long long pos = 0, neg = 0;
        while (n--)
        {
            int a = 0;
            cin >> a;
            if (a > 0)
            {
                pos += a;
            }
            else
            {
                if (!pos)
                    neg -= a;
                else if (pos >= abs(a))
                    pos += a;
                else
                {
                    neg -= a + pos;
                    pos = 0;
                }
            }
        }
        cout << (pos + neg) / 2 << endl;
    }
    return 0;
}
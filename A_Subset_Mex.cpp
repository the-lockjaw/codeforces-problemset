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
        vector<int> mp(101);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        int a = -1, b = -1;
        for (int i = 0; i < 101; i++)
        {
            if (!mp[i])
            {
                a = i;
                break;
            }
            else
                a = i + 1;
        }
        for (int i = 0; i < 101; i++)
        {
            if (mp[i] < 2)
            {
                b = i;
                break;
            }
            else
                b = i + 1;
        }
        cout << a + b << endl;
    }
    return 0;
}
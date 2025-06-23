#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    vector<int> v(t);
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }

    bool inc_done = false, const_done = false, ans = true;

    for (int i = 0; i < t - 1; i++)
    {
        if ((v[i] < v[i + 1] && inc_done) || (v[i] == v[i + 1] && const_done))
        {
            ans = false;
            break;
        }
        if (v[i] == v[i + 1])
            inc_done = true;
        if (v[i] > v[i + 1])
        {
            const_done = true;
            inc_done = true;
        }
    }

    cout << (ans ? "YES" : "NO") << '\n';
    return 0;
}

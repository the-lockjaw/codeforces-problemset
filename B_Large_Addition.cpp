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
        string n;
        cin >> n;
        bool ans = true;
        if (n[0] != '1' || n[n.length() - 1] == '9')
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 1; i < n.length() - 1; i++)
        {
            if (n[i] == '0')
                ans = false;
        }
        cout << (ans ? "YES\n" : "NO\n");
    }
    return 0;
}
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
        string s;
        cin >> n >> s;
        int empty_cells = 0;
        bool three_empty = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                empty_cells++;
            }
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] == s[i - 1] && s[i] == s[i + 1] && s[i] == '.')
                three_empty = true;
        }
        if (three_empty)
            cout << 2 << endl;
        else
            cout << empty_cells << endl;
    }
    return 0;
}
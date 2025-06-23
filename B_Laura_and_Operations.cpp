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
        int a, b, c;
        cin >> a >> b >> c;
        a %= 2;
        b %= 2;
        c %= 2;
        if (a == b && b == c)
            cout << "1 1 1" << endl;
        else if (a == b)
            cout << "0 0 1" << endl;
        else if (b == c)
            cout << "1 0 0" << endl;
        else
            cout << "0 1 0" << endl;
    }
    return 0;
}
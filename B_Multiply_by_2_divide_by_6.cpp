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
        int two = 0, three = 0;
        bool ans = false, other_factors = false;
        while (n > 1)
        {
            if (!(n % 2))
            {
                n /= 2;
                two++;
            }
            else if (!(n % 3))
            {
                n /= 3;
                three++;
            }
            else
            {
                other_factors = true;
                break;
            }
        }
        ans = !other_factors && three >= two;
        if (ans)
            cout << 2*three-two << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
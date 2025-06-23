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
        long long count = 0;
        n--;
        while (n--)
        {
            int a;
            cin >> a;
            if (a)
                count += a;
            else
                count += count > 0;
        }
        int b;
        cin>>b;
        cout << count << endl;
    }
    return 0;
}
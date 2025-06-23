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
        int n, x;
        cin >> n >> x;
        vector<int> stations(n);
        for (int i = 0; i < n; i++)
            cin >> stations[i];
        int fuel = max(2 * (x - stations[n - 1]), stations[0]);
        for (int i = 0; i < n - 1; i++)
        {
            int distance = stations[i + 1] - stations[i];
            fuel = max(distance, fuel);
        }
        cout << fuel << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    bool ans = false;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ans = ans || a;
    }
    if (ans)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;
    return 0;
}
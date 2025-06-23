#include <bits/stdc++.h>
using namespace std;

int sum_of_digits(int x)
{
    int ans = 0;
    while (x > 0)
    {
        ans += x % 10;
        x /= 10;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[10000] = {0};
    int i = 0, num = 19;
    while (i < 10000)
    {
        if (sum_of_digits(num) == 10)
        {
            arr[i] = num;
            num += 9;
            i++;
        }
        else
        {
            num += 9;
        }
    }

    int t;
    cin >> t;
    cout << arr[t - 1] << endl;
    return 0;
}
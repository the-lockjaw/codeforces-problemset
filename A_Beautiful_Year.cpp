#include <bits/stdc++.h>
using namespace std;

bool hasDistinctDigits(int year)
{
    string s = to_string(year);
    set<char> digits(s.begin(), s.end());
    return digits.size() == s.size();
}

int main()
{
    int y;
    cin >> y;

    while (true)
    {
        y++;
        if (hasDistinctDigits(y))
        {
            cout << y << endl;
            break;
        }
    }
    return 0;
}

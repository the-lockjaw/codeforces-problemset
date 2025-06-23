#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int next_year = (s[0] - '0' + 1) * pow(10, s.length() - 1);
    int current_year = stoi(s);
    cout << next_year - current_year << endl;
    return 0;
}
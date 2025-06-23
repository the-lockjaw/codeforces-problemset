#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int uppercase_letters = 0, lowercase_letters = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if ('a' <= s[i] && s[i] <= 'z')

            lowercase_letters++;
        else
            uppercase_letters++;
    }
    if (uppercase_letters > lowercase_letters)
        for (int i = 0; i < s.length(); i++)

            s[i] = (char)toupper(s[i]);
    else
        for (int i = 0; i < s.length(); i++)

            s[i] = (char)tolower(s[i]);
    cout<<s<<endl;
    return 0;
}
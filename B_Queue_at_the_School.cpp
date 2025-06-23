#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, k;
    string s,a;
    cin >> t >> k >> s;
    a = s;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < t-1; j++)
        {
            if(s[j]=='B'&&s[j+1]=='G'){
                swap(a[j],a[j+1]);
            }
        }
        s = a;
    }
    cout<<s<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, zero = 0, one = 0;
    cin >> n;
    string s;
    int max_split = 0;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            one += 1;
        else
            zero += 1;
    }
    if (one == zero)
    {
        cout << 2 << endl
             << s.substr(0, 1) << " " << s.substr(1, (n - 1)) << endl;
    }
    else
    {
        cout << 1 << endl
             << s << endl;
    }
}
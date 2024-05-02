#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string str[n];
        set<int> arr;
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
            int first = 0, second = 0;
            for (int j = 0; j < k; j++)
            {
                if (str[i][j] == '1')
                {
                    first++;
                    second = j;
                }
            }
            if (first == 1)
            {
                arr.insert(second);
            }
        }
        if (arr.size() == k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
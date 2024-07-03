#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> l;
        l.reserve(n);
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            l.push_back(num);
        }

        sort(l.begin(), l.end());

        vector<int> temp(n + 1, 0);
        for (int i : l)
        {
            temp[i]++;
        }

        int ans = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            ans = min(ans, (n - temp[i]) * i);
        }

        cout << ans << '\n';
    }

    return 0;
}
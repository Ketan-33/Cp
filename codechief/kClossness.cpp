#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        int  k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++) n
            cin >> a[i];

        sort(a.begin(), a.end());

        int  mx = a[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            int tmp = (mx - a[i]) / k;
            a[i] = a[i] + (tmp * k);
        }

        int mn = a[n - 1];
        for (int i = 0; i < n; i++)
            mn = min(mn, a[i]);

        int ans1 = mx - mn;
        sort(a.begin(), a.end());
        mx = a[n - 1];

        for (int i = 0; i < n; i++)
        {
            ans1 = min(ans1, mx - a[i]);
            mx = max(mx, a[i] + k);
        }

        cout << ans1 << endl;
    }

    return 0;
}

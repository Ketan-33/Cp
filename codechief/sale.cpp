#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;

signed main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> sales(N);
        vector<int> pre(N + 1, 0);
        for (int i = 0; i < N; ++i)
        {
            cin >> sales[i];
            pre[i + 1] = pre[i] + sales[i];
        }
        int mx = 0;
        for (int i = 0; i < N; ++i)
        {
            int total_sales = pre[i] + sales[i]*2;
            mx = max(mx, total_sales);
        }

        cout << mx << endl;
    }

    return 0;
}

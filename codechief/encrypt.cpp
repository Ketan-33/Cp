#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;

const int mod = 1000000007;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
  
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        int ans = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == 1 || arr[i] == 0 || (ans <= 1 && arr[i] > 1))
                ans = (ans + arr[i]) % mod;
            else
                ans = (ans * arr[i]) % mod;
        }

        cout << ans << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        int count = 0;
        unordered_map<int, int> diffs; // Map to store difference frequencies
        for (int i = 0; i < n; ++i)
        {
            int diff = arr[i] - arr[0]; // Subtract first element to get relative differences
            count += diffs[diff];       // Count existing progressions with this difference
            diffs[diff]++;              // Increment frequency of current difference
        }

        diffs.clear(); // Clear map for next test case
        cout << count << endl;
    }

    return 0;
}

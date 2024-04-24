#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        int ans = 0;
        for (auto i: arr)
        {

            if (i < 4 && k)
            {
                ans += 7 - i;
                k--;
            }
            else
                ans += i;
        }
        cout << ans << endl; 
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end()); 

    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        int low = -1, high = n - 1, floor = INT32_MIN;
        while (low < high)
        {
            int mid = (low + high + 1) / 2;
            if (arr[mid] <= num)
            {
                floor = arr[mid];
                low = mid;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << floor << endl;
    }

    return 0;
}

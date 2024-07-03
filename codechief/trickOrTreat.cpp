#include <iostream>
#include <vector>
#include <unordered_map>
#define int long long
using namespace std;

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> candyBoxes(n);
        vector<int> chocolateBoxes(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> candyBoxes[i];
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> chocolateBoxes[i];
        }

        unordered_map<int, int> remainderCount;

        // Count remainders for candy boxes
        for (int i = 0; i < n; ++i)
        {
            int remainder = candyBoxes[i] % m;
            // Ensure the remainder is positive
            if (remainder < 0)
                remainder += m;
            remainderCount[remainder]++;
        }

        int matchCount = 0;

        // Check each chocolate box
        for (int i = 0; i < n; ++i)
        {
            int remainder = chocolateBoxes[i] % m;
            // Ensure the remainder is positive
            if (remainder < 0)
                remainder += m;
            int neededRemainder = (m - remainder) % m; // Ensure positive result

            if (remainderCount.find(neededRemainder) != remainderCount.end())
            {
                matchCount += remainderCount[neededRemainder];
            }
        }

        cout << matchCount << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
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
        for (int i = 0; i < n; ++i)
        {
            for (int j = i; j < n; ++j)
            {
                int a = arr[i] - arr[j];
                int b = arr[i] + arr[j];
                int c = arr[i] * arr[j];
                if (2 * b ==a + c)
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}

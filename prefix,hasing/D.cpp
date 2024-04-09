#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);

        for (int i = 0; i < N; ++i)
        {
            cin >> arr[i];
        }

        int maxGirls = 0, currentGirls = 0;
        for (int i = 0; i < K; ++i)
        {
            currentGirls += arr[i];
        }
        maxGirls = currentGirls;

        for (int i = K; i < N; ++i)
        {
            currentGirls += arr[i] - arr[i - K];
            maxGirls = max(maxGirls, currentGirls);
        }

        cout << maxGirls << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int calculate_adjacent_diff_sum(const vector<int> &A)
{
    int sum = 0;
    for (int i = 0; i < A.size() - 1; ++i)
    {
        sum += abs(A[i] - A[i + 1]);
    }
    return sum;
}

int max_possible_sum(vector<int> &A, int K)
{
    int N = A.size();
    int original_sum = calculate_adjacent_diff_sum(A);
    int max_sum = original_sum;

    // Check the effect of replacing each element A[i] with 1 and K
    for (int i = 0; i < N; ++i)
    {
        int original = A[i];

        // Replace A[i] with 1 and calculate new adjacent differences sum
        A[i] = 1;
        int new_sum_1 = calculate_adjacent_diff_sum(A);
        max_sum = max(max_sum, new_sum_1);

        // Replace A[i] with K and calculate new adjacent differences sum
        A[i] = K;
        int new_sum_2 = calculate_adjacent_diff_sum(A);
        max_sum = max(max_sum, new_sum_2);

        // Restore the original value
        A[i] = original;
    }

    return max_sum;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        cout << max_possible_sum(A, K) << endl;
    }
    return 0;
}
